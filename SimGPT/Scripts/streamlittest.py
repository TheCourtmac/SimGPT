import streamlit as st
from PIL import Image
from io import BytesIO
import requests
import base64

def make_post_request(url, payload):
    # Send a POST request to the specified URL with the given payload
    response = requests.post(url, data=payload)
    # Check if the request was successful
    if response.status_code == 200:
        return response.json()
    else:
        st.error(f"Failed to fetch data: {response.status_code}")
        return None
    
    # Function to decode and display the encoded image
def display_encoded_image(encoded_image):
    # Decode the Base64 string, ignoring the MIME type if it's part of the string
    if ',' in encoded_image:  # Check if it includes the MIME type
        encoded_image = encoded_image.split(',')[1]  # Remove the MIME type part

    # Decode the Base64 string into bytes
    image_bytes = base64.b64decode(encoded_image)

    # Convert bytes data to a PIL Image
    image = Image.open(BytesIO(image_bytes))

    # Display the image in the Streamlit app
    st.image(image, caption="Generation for prompt")
    
def display_result(data):
    if data:
        # Extract 'url' and 'img' from the response
        page_url = data.get("url")
        image_url = data.get("img")

        # Display the URLs in the Streamlit app
        ##st.write(f"Page URL: {page_url}")
        display_encoded_image(image_url)

        # You can also display the image directly in the app
        ##st.image(image_url, caption="Image from Response")

# Initialize the image generator with your server's address

st.title("SimGPT")

if 'saved_image' not in st.session_state:
    st.session_state.saved_image = ""

if 'generated' not in st.session_state:
    st.session_state.saved_image = "False"

# User inputs for positive and negative prompts
user_input = st.text_input("Enter your image prompt:")

# Main logic for API call
submit = st.button("Generate Image")

if submit:
    request_url="http://127.0.0.1:7776/generate"
    payload = user_input

    result = make_post_request(request_url, payload)
    st.session_state.saved_image = result.get("img")
    display_result(result)
    st.session_state.generated = True

st.text("Continue with generation?")
yes = st.button("Continue")

if yes:
    saved_image = st.session_state.saved_image
    request_url = "http://127.0.0.1:7776/generateVid"
    payload = saved_image

    result = make_post_request(request_url, payload)
    url = result.get("url")
    st.text(url)