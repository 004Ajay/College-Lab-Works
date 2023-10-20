# Program for computer to guess a number with starting number from user

import random

def guess(limit):
    start = 1
    stop = limit
    reply = ''
    steps = 0
    while reply != 'c':
        steps += 1 # incrementing step count
        guess = random.randint(start, stop) # computer guessing a random num
        reply = input(f'{guess}, low, high or correct (L, H, C)? : ')
        if reply == 'h':
            stop = guess - 1
        elif reply == 'l':
            start = guess + 1
    print(f'Computer correctly guessed, {guess}\nNumber of steps: {steps}')        

while True:
    LimitNum = int(input("Enter a limit number: ")) # Human entering limit
    guess(LimitNum)
    if input("Again? y/n: ") != 'y': # For breaking while loop
        print('See you again, exited.')
        break