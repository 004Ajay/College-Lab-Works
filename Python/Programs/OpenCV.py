import cv2

inp = cv2.imread('img.jpg', 0) # opening image, num 1 indicates 'Color Image', 0 means 'B&W Image'

out = cv2.imshow('Test Image', inp) # showing image with title as 1st argument

cv2.waitKey() # wait time in ms, until a key-press detected

print(f"\n\Height: {inp.shape[0]}\nWidth: {inp.shape[1]}") # Image informations

try:
    print(f"\nChannels: {inp.shape[2]}\n") # Image channels
except IndexError:    
    print("Error displaying image channels\n") # Greyscale images has default channel

cv2.destroyAllWindows() # Allows users to destroy all windows after exiting script.