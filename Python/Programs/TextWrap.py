"""
Given a string and width, 
write a program to convert the given string into different strings of given width separated by newline.
"""

import textwrap
stri = input()
num=int(input())
res=textwrap.fill(stri, num)
print(res, end="")