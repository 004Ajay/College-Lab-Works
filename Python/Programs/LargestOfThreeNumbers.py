# PYTHON PROGRAM TO PRINT THE LARGEST OF THREE NUMBERS

num1 = int(input("Enter first num: ")) 
num2 = int(input("Enter second num: "))
num3 = int(input ("Enter third num: "))

if (num1 > num2) and (num1 > num3):
    print (numl, "is the largest")
elif (num2 > num1) and (num2 > num3):
    print (num2,"is the largest")
else:
    print (num3, "is the largest")

