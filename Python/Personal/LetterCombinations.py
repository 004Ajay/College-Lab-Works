# Python program to make all possible combination of letters in a word

from itertools import permutations
import math

# To make combination of letters and print them.
def forPerm(word):
    perms = list(permutations(list(word)))
    print(f"List:\n{[''.join(letter) for letter in perms]}")

# To count number of letter in word and print it's factorial.
def toNum(word):
    count = 0
    for i in word:
        count += 1
    print(f"\nNumber of letters in {word}: {count}\nTotal number of combinations are {count}! = {math.factorial(count)}\n")    

# Driver code, "__main__"
def main():
    inp = input("Enter a word: ")
    toNum(inp)
    forPerm(inp)

if __name__ == "__main__":
    main()