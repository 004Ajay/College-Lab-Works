# A Text to Speech Software using Python with 
# Output Audio Speed Control & Voice Recognition from user 
# V_Recog -> like Mm.. Yes..

from gtts import gTTS # Google Text-to-Speech Library
import os

while True:
    sen = input("Enter the sentence:\n") # getting text from user for conversion to audio

    # text -> pass your sentence
    # lang -> your preferred language
    # slow -> speed of output audio, pass as true or false
    toAudio = gTTS(text = sen, lang = 'en', slow = False) # converting text to audio

    try:
        toAudio.save("new.mp3")  # Saving the converted audio in a mp3 file
        main =  open("new.mp3", "rb").read() # opening saved mp3 file for copying to another location
        with open('C:/Users/ASUS/Desktop/audio.mp3',  'wb+') as dest: # change path as your need
            dest.write(main)
        print("File saved to Desktop") 
        os.system("new.mp3") # playing the text inside program
    except:
        print("Unable to process")
    if input("Again? y/n : ") == 'y' or 'Y': # breaking while loop (line 8) if input is Y or y
        break