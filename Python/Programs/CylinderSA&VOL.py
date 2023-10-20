# PYTHON PROGRAM TO FIND SURFACE ARE & VOLUME OF A CYLINDER

def formula(radius, height):
    sa = (2*3.14*radius) * (radius+height)
    vol = (3.14*radius*radius*height)
    print("surface area = ",sa,"units")
    print("volume = ",vol,"units")
formula(4, 3)