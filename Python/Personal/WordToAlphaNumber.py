# This program convert input word to English alphabet number
# eg: a = 1, b = 2 then,  ab = 1 2

dict = { 'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5, 'f': 6, 'g': 7, 'h': 8, 'i': 9, 'j': 10,
         'k': 11, 'l': 12, 'm': 13, 'n': 14, 'o': 15, 'p': 16, 'q': 17, 'r': 18, 's': 19, 't': 20,
         'u': 21, 'v': 22, 'w': 23, 'x': 24, 'y': 25, 'z': 26 }

word = input("Enter the word: ") # getting word from user

print(f"'{word}' to number: ", end = "")
for i in word.lower(): # going through each character of input word
    if i in dict: # checking for the character in the above dictonary
        print(dict[i], end = " ") # 'end' given for spacing b/w printed numbers
    else:
        print(f"\nUnsupported character found: {i}") # for character not in the English alphabet