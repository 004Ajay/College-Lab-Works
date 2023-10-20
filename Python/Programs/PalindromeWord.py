# Python program to find whether a word is palindrome or not

stri = input("Enter the word: ")
rev = stri[-1:(-1*(len(stri)+1)):-1]

if stri == rev:
    print(f"{stri} is a palindrome word")
else:
    print(f"{stri} is not a palindrome")