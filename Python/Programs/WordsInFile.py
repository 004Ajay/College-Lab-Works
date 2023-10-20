"""
Write a program to count the number of words, sentences, uppercase letter, lowercase letter, and special symbols
in a text stored on a file.
"""

file = open('letter.txt', 'r+') # make a 'letter.txt' in the current folder

uppercase = lowercase = specialSym = sen = 0

special = '!@#$%^&*()-+?_=,<>/"'

for word in file:
    sen = word.split('.')
    words = word.split()
   
    for i in range(0, len(word)):
        if word[i].isupper():
            uppercase += 1
           
        elif word[i].islower():
            lowercase += 1
           
        elif word[i] in special:
            specialSym += 1
           
print("Number of words:", len(words))
print("Number of sentences: ", len(sen))
print("Number of uppercase letters: ", uppercase)
print("Number of lowercase letters: ", lowercase)
print("Number of special symbols: ", specialSym)
file.close()