# Simple Program for human to guess a number

import random
def guess(num):
    random_num = random.randint(1, num) # computer takes a random number for human to guess
    guess = steps = 0
    while guess != random_num:
        steps += 1 # incrementing step count
        guess = int(input(f'Guess a num b\w 1 & {num}: ')) # getting guess number
        if guess < random_num:
            print("Guess is too low")
        elif guess > random_num:
            print("Guess is too high")
    print(f'Congrats...You correctly guessed {random_num}\nNumber of steps: {steps}')      

while True:
    limit = int(input("Enter a num(limit): "))
    guess(limit)
    if input("Again? y/n: ") != 'y': # For breaking while loop
        print('See you again, exited.')
        break