from moviepy import editor # install moviepy using 'pip install moviepy' in cmd

YourVideo = editor.VideoFileClip("link to mp4") # put path to mp4 file here in " "
ToAudio = YourVideo.audio
ToAudio.write_audiofile('new_audio.mp3') 
# Auido file will be saved to current folder or to the folder you have opened the code editor