# Program for computer to guess a number with starting & limit number from user

import random

def guess(begin, limit):
    start = begin
    stop = limit
    reply = ''
    steps = 0
    while reply != 'c':
        steps += 1 # incrementing step count
        guess = random.randint(start, stop) # computer guessing a random num
        reply = input(f'{guess}, low, high or correct (L, H, C)? : ').lower()
        if reply == 'h':
            stop = guess - 1
        elif reply == 'l':
            start = guess + 1
    print(f'Computer correctly guessed, {guess}\nNumber of steps: {steps}')        

while True:
    StartNum = int(input("Enter a starting number: ")) # Human entering start number
    LimitNum = int(input("Enter a limit number: ")) # Human entering limit
    if StartNum > LimitNum: # catching the clever one.
        print("Starting num > Limit num.\nPlease try again.")
        StartNum = int(input("Enter a starting number: ")) # Human correcting start number
        LimitNum = int(input("Enter a limit number: ")) # Human entering another limit
        guess(StartNum, LimitNum)
    else:
        print(f"Bounds set between {StartNum} & {LimitNum}")
        guess(StartNum, LimitNum)
    if input("Again? y/n: ") != 'y': # For breaking while loop
        print('See you again, exited.')
        break