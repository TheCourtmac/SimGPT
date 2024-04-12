SimGPT is a COP4934 senior design project that sets out to meet the following goals:

Demonstrate how LLM code generators can generate a game on demand
Describe how you picked the LLM code generators (pros and cons)
Describe how you would revector from games to digital twin and simulation Code

To use:

Install Automatic1111 Stable Diffusion: https://github.com/AUTOMATIC1111/stable-diffusion-webui

Install ComfyUI: https://github.com/comfyanonymous/ComfyUI

1) Open the file SimGPT/Scripts/streamlittest.py
2) Change current directory to where the python file is located (ex: cd SimGPT/Scripts). Run streamlit from terminal using the command: streamlit run streamlittest.py
3) Open the file SimGPT/Scripts/post.py. Run the python file using the play button in VSCode.
4) Run stable diffusion model by running 'webui-user.bat' under the webui folder in sd webUI.
5) Enter a prompt into the streamlit frontend and press generate. You may press generate until you get the adequte generation.
6) Once an adequte generation is received, close out of stable diffusion completely (this is due to overload on the GPU).
7) Open up ComfyUI by running the file run_nvidia_gpu.bat file under the ComfyUI_windows_portable folder.
8) Press the continue button to generate the video.
9) Plug in the mp4 file into xVerse and open up the blueprint into your world.
10) You may end python scripts by pressing ctrl + C. You may also close out of ComfyUI.

Notes:
- When installing stable diffusion, make sure to edit the web-user.bat file to include --api in the launch arguments.
- Change directory paths that are commented in the scripts to reflect your paths
- The .mp4 file is attained either by saving the .mp4 from the video link displayed by the frontend or by going into the static folder inside of scripts. The file is named interpolation.mp4
- CUDA toolkit is needed for this application. Version 11.8 works.
- XV3DTools tools are needed for the splat generation. They can be downloaded here: https://github.com/xverse-engine/XV3DGS-UEPlugin
