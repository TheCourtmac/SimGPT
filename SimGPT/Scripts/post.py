from flask import *
import json, time
import requests
from PIL import Image
import base64
import io
import os

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

    return jsonify({'url': image_url})

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
        "steps": 5
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

if __name__ == '__main__':
    app.run(port=7776)