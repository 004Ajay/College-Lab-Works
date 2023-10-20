# For ruuning this code, install python(from python.org) & deepface(from PyPi)
# On running, the program will download some .h5 files(file containing multidimensional arrays of scientific data)
# Those files will range from 1-2 GB of size .......... NOTE ..........

from deepface import DeepFace
face_analysis = DeepFace.analyze(img_path = "person.jpeg") # image taken from thispersondoesnotexist.com
print(face_analysis)


"""
# More formatted view of above item (face_analysis)
# comment out 'print(face_analysis)', and uncomment this .......... IMPORTANT ..........

print('Age:',face_analysis[0]['age'])
print('Emotion:',max(face_analysis[0]['emotion']))
print('Gender:',max(face_analysis[0]['gender']))

# You can add more items from list-dictionary by changing above lines
"""