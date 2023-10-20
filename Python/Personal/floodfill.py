from PIL import Image, ImageDraw
img = Image.open("img.jpg")
img = img.convert("RGB")
pos = (580, 370)
RED = (255, 0, 0)
ImageDraw.floodfill (img, pos, RED)
img.save("image.jpg")