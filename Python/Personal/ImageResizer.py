from ast import FunctionDef
from decimal import DivisionByZero
from PIL import Image as im

def Resizer(img, width, height):
    print(f"Resizing..\nOriginal Image size (width, height): {img.size}") # Image size
    try:
        resized_img = img.resize((width, height)) # Resizing Image
        resized_img.save('ResizedImage.jpg') # Saving resized Image
        print("Resizing done successfully") # Success message
    except:
        print("Resizing not successfull") # Error message

def main():
    try:
        img = im.open(input('Enter image name or path: ')) # give image path if image not in current folder
        try:
            width = int(input('Enter required width: '))
            height = int(input('Enter required height: '))
            try:    
                Resizer(img, width, height)
            except:
                print('Error calling Resizer function. Try Again')            
        except:
            print("Error in Width or Height Values. Try Again")    
    except:
        print("Error in file name. Try Again")       
        
def GettingValues():
    try:
        img = im.open(input('Enter image name or path: ')) # give image path if image not in current folder
        width = int(input('Enter required width: '))
        height = int(input('Enter required height: '))
        Resizer(img, width, height)
    except FunctionDef: print('Error calling Resizer function. Try Again')            
    except ValueError: print("Error in Width or Height Values. Try Again")    
    except OSError: print("Error in file name. Try Again") 
    except Exception: print("Unknown error. Try Again")          

if __name__ == "__main__":
    main()        
