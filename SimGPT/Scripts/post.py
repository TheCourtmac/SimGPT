from flask import *
import json, time
import requests
from PIL import Image
import base64
import io
import os

import websocket #NOTE: websocket-client (https://github.com/websocket-client/websocket-client)
import uuid
import json
import urllib.request
import urllib.parse
import base64
from io import BytesIO
from flask import *

# stuff for webp to mp4
import os
import shutil
import tempfile
import argparse
from moviepy.editor import *
from moviepy.editor import VideoFileClip, concatenate_videoclips
from PIL import Image

# stuff for slowing mp4
from pydub import AudioSegment
import math
import numpy as np
import cv2

app = Flask(__name__)

@app.route('/', methods=['GET'])
def home_page():
    data_set={'Timestamp': time.time()}
    json_dump = json.dumps(data_set)

    return json_dump

@app.route('/generate', methods=['POST'])
def generate():
    prompt = request.data.decode('utf-8')

    # return jsonify({'prompt': prompt})

    image = getImage(prompt)
    
    image_file = saveImage(image)

    image_url = url_for('static', filename=image_file, _external=True)

    return jsonify({'url': image_url, 'img': image})

    # return jsonify({'image': image})

    # return send_file(
    #     io.BytesIO(base64.b64decode(image)),
    #     mimetype='image/png',
    #     as_attachment=True,
    #     download_name="generation.png"
    # )

def getImage(prompt):
    url = "http://127.0.0.1:7860"

    payload = {
        "prompt": prompt,
        "steps": 30
    }

    response = requests.post(url = f'{url}/sdapi/v1/txt2img', json = payload)

    r = response.json()

    return r['images'][0]

    # image = Image.open(io.BytesIO(base64.b64decode(r['images'][0])))
    # image.show()

def saveImage(image_data):
    image_bytes = base64.b64decode(image_data)
    image_filename = 'generated_image.png'
    with open(os.path.join(app.static_folder, image_filename), 'wb') as f:
        f.write(image_bytes)
    return image_filename

##############################################################################

server_address = "127.0.0.1:8188"
client_id = str(uuid.uuid4())

prompt_text = """
{
    "3": {
        "inputs": {
        "seed": 186977943536219,
        "steps": 20,
        "cfg": 2.5,
        "sampler_name": "euler",
        "scheduler": "karras",
        "denoise": 1,
        "model": [
            "14",
            0
        ],
        "positive": [
            "12",
            0
        ],
        "negative": [
            "12",
            1
        ],
        "latent_image": [
            "12",
            2
        ]
        },
        "class_type": "KSampler",
        "_meta": {
        "title": "KSampler"
        }
    },
    "8": {
        "inputs": {
        "samples": [
            "3",
            0
        ],
        "vae": [
            "15",
            2
        ]
        },
        "class_type": "VAEDecode",
        "_meta": {
        "title": "VAE Decode"
        }
    },
    "10": {
        "inputs": {
        "filename_prefix": "ComfyUI",
        "fps": 10,
        "lossless": false,
        "quality": 85,
        "method": "default",
        "images": [
            "8",
            0
        ]
        },
        "class_type": "SaveAnimatedWEBP",
        "_meta": {
        "title": "SaveAnimatedWEBP"
        }
    },
    "12": {
        "inputs": {
        "width": 512,
        "height": 512,
        "video_frames": 25,
        "motion_bucket_id": 127,
        "fps": 6,
        "augmentation_level": 0,
        "clip_vision": [
            "15",
            1
        ],
        "init_image": [
            "23",
            0
        ],
        "vae": [
            "15",
            2
        ]
        },
        "class_type": "SVD_img2vid_Conditioning",
        "_meta": {
        "title": "SVD_img2vid_Conditioning"
        }
    },
    "14": {
        "inputs": {
        "min_cfg": 1,
        "model": [
            "15",
            0
        ]
        },
        "class_type": "VideoLinearCFGGuidance",
        "_meta": {
        "title": "VideoLinearCFGGuidance"
        }
    },
    "15": {
        "inputs": {
        "ckpt_name": "svd_xt.safetensors"
        },
        "class_type": "ImageOnlyCheckpointLoader",
        "_meta": {
        "title": "Image Only Checkpoint Loader (img2vid model)"
        }
    },
    "23": {
        "inputs": {
        "image": "example.png",
        "upload": "image"
        },
        "class_type": "LoadImage",
        "_meta": {
        "title": "Load Image"
        }
    }
}
"""

def linear_interpolate(frame1, frame2):
    """ Perform simple linear interpolation between two frames """
    return cv2.addWeighted(frame1, 0.5, frame2, 0.5, 0)

def interpolate_frames(video_path, output_path, interpolation_factor):
    # Open the video
    cap = cv2.VideoCapture(video_path)
    if not cap.isOpened():
        print("Error opening video file.")
        return

    # Get video properties
    fps = cap.get(cv2.CAP_PROP_FPS)
    width = int(cap.get(cv2.CAP_PROP_FRAME_WIDTH))
    height = int(cap.get(cv2.CAP_PROP_FRAME_HEIGHT))
    fourcc = cv2.VideoWriter_fourcc(*'XVID')
    # fourcc = cv2.cv.CV_FOURCC(*'XVID') 
    out_fps = fps * interpolation_factor

    # Create VideoWriter object
    out = cv2.VideoWriter(output_path, fourcc, out_fps, (width, height))

    ret, prev_frame = cap.read()
    if not ret:
        print("Failed to read the first frame.")
        return

    # Write the first frame
    out.write(prev_frame)

    while True:
        ret, next_frame = cap.read()
        if not ret:
            break

        # Interpolate frames
        for i in range(1, interpolation_factor):
            frac = i / interpolation_factor
            interp_frame = cv2.addWeighted(prev_frame, 1 - frac, next_frame, frac, 0)
            out.write(interp_frame)

        # Write the original next frame
        out.write(next_frame)
        prev_frame = next_frame

    # Release everything when done
    cap.release()
    out.release()
    cv2.destroyAllWindows()
    print("Video processing completed.")

@app.route('/generateVid', methods=['POST'])
def generateVid():
    prompt = json.loads(prompt_text)

    img = request.data.decode('utf-8')
    decoded_image = base64.b64decode(img)
    image = Image.open(BytesIO(decoded_image))

    # change this directory depending on your machine!
    image.save("C:/Users/link2/Desktop/ComfyUI_windows_portable_nvidia_cu121_or_cpu/ComfyUI_windows_portable/ComfyUI/input/in.png")
    prompt["23"]["inputs"]["image"] = "in.png"

    ws = websocket.WebSocket()
    ws.connect("ws://{}/ws?clientId={}".format(server_address, client_id))

    videos = get_videos(ws, prompt)

    processBin(videos)

    image_url = url_for('static', filename="slowed_out.mp4", _external=True)

    return jsonify({'url': image_url})

def processBin(videos):
    for node_id in videos:
        for image_data in videos[node_id]:
            # from PIL import Image
            # import io
            # print(image_data)
            # image = Image.open(io.BytesIO(image_data))
            # image.show()

            filename = "test.webp"
            with open(filename, 'wb') as f:
                f.write(image_data)

    webp_mp4("test.webp", "out.mp4")

    # might have to chagne these directories
    # on my machine this file is in SimGPT/SimGPT/Scripts and the
    # terminal directory should just be in SimGPT/SimGPT/ when you hit the play button
    slow_mp4("out.mp4", "Scripts/static/slowed_out.mp4")
    interpolate_frames("Scripts/static/slowed_out.mp4", "Scripts/static/interp_out.mp4", 120)

def analyse_image(path):
    im = Image.open(path)
    results = {
        'size': im.size,
        'mode': 'full',
    }
    try:
        while True:
            if im.tile:
                tile = im.tile[0]
                update_region = tile[1]
                update_region_dimensions = update_region[2:]
                if update_region_dimensions != im.size:
                    results['mode'] = 'partial'
                    break
            im.seek(im.tell() + 1)
    except EOFError:
        pass
    return results

def process_image(path, temp_dir):
    images = []
    mode = analyse_image(path)['mode']

    im = Image.open(path)

    i = 0
    p = im.getpalette()
    last_frame = im.convert('RGBA')

    try:
        while True:
            basename = os.path.basename(path)
            output_folder = temp_dir
            frame_file_name = os.path.join(output_folder, f'{os.path.splitext(basename)[0]}-{i}.png')
        
            print(f"saving {path} ({mode}) frame {i}, {im.size} {im.tile} to {frame_file_name}")

            if '.gif' in path:
                if not im.getpalette():
                    im.putpalette(p)

            new_frame = Image.new('RGBA', im.size)

            if mode == 'partial':
                new_frame.paste(last_frame)

            new_frame.paste(im, (0, 0), im.convert('RGBA'))
           
            new_frame.save(frame_file_name, 'PNG')
            images.append(frame_file_name)
            i += 1
            last_frame = new_frame
            im.seek(im.tell() + 1)
    except EOFError:
        pass
    return images

def webp_mp4(input_file, output_file=None, fps=20):
    temp_dir = tempfile.mkdtemp()
    try:
        images = process_image(input_file, temp_dir)
        if output_file is None:
            output_file = os.path.splitext(input_file)[0] + '.mp4'
        clip = ImageSequenceClip(images, fps=fps)
        clip.write_videofile(output_file)
        return [output_file]
    finally:
        shutil.rmtree(temp_dir)

# def slow_mp4(input, output):
#     # Load the video clip
#     clip = VideoFileClip(input)
    
#     # Calculate the duration of the video clip
#     duration = clip.duration
    
#     # Calculate the factor by which we need to slow down the video
#     slowdown_factor = max(1, duration / 6)
    
#     # Slow down the video clip
#     slowed_clip = clip.fx(vfx.speedx, factor=1/slowdown_factor)
    
#     # If the duration is still less than 6 seconds, extend it by duplicating frames
#     if slowed_clip.duration < 7:
#         extra_duration = 6 - slowed_clip.duration
#         slowed_clip = slowed_clip.fx(vfx.speedx, factor=2).fx(vfx.speedx, factor=0.5)
#         slowed_clip = slowed_clip.set_duration(6)
    
#     # Write the modified clip to a file
#     slowed_clip.write_videofile(output, codec="libx264", fps=clip.fps)

def slow_mp4(input, output):
    # Load the video clip
    clip = VideoFileClip(input)
    
    # Calculate the factor by which we need to slow down the video
    slowdown_factor = 8 / clip.duration  # Calculate how much to slow down to stretch to 8 seconds
    
    # Slow down the video clip using the slowdown factor
    slowed_clip = clip.fx(vfx.speedx, 1 / slowdown_factor)
    
    # Write the modified clip to a file
    slowed_clip.write_videofile(output, codec="libx264", fps=clip.fps)

# Example usage:
# slow_mp4('input.mp4', 'output.mp4')


def queue_prompt(prompt):
    p = {"prompt": prompt, "client_id": client_id}
    data = json.dumps(p).encode('utf-8')
    req =  urllib.request.Request("http://{}/prompt".format(server_address), data=data)
    return json.loads(urllib.request.urlopen(req).read())

def get_history(prompt_id):
    with urllib.request.urlopen("http://{}/history/{}".format(server_address, prompt_id)) as response:
        return json.loads(response.read())
    
def get_image(filename, subfolder, folder_type):
    data = {"filename": filename, "subfolder": subfolder, "type": folder_type}
    url_values = urllib.parse.urlencode(data)
    with urllib.request.urlopen("http://{}/view?{}".format(server_address, url_values)) as response:
        return response.read()

def get_videos(ws, prompt):
    prompt_id = queue_prompt(prompt)['prompt_id']
    output_images = {}
    while True:
        out = ws.recv()
        if isinstance(out, str):
            message = json.loads(out)
            # print(message)
            # print("\n\n")
            if message['type'] == 'executing':
                data = message['data']
                if data['node'] is None and data['prompt_id'] == prompt_id:
                    break #Execution is done

        else:
            continue #previews are binary data

    history = get_history(prompt_id)[prompt_id]
    for o in history['outputs']:
        for node_id in history['outputs']:
            node_output = history['outputs'][node_id]
            # print(node_output)
            # print("\n\n")
            if 'images' in node_output:
                images_output = []
                for image in node_output['images']:
                    image_data = get_image(image['filename'], image['subfolder'], image['type'])
                    images_output.append(image_data)
            output_images[node_id] = images_output

    return output_images

if __name__ == '__main__':
    app.run(port=7776)