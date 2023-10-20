"""
-> Python program to check whether a number is odd or even in one line of code, both input & output included

** if-else shorthand in python is used ** -> easy to understand, but not always.

step 1: Getting an input number and converting it to integer data type

step 2: Checking whether the number is even or odd using (num % 2 == 0)
        [% -> modulo operand, takes reminder from division]

step 3: if step 2 operation is true, then number is even else the number is odd

""" 
# One line code: 
print("Even") if int(input("Number: ")) % 2 == 0 else print("Odd")