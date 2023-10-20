"""
Define a python function to simulate coin toss for a user input number of tosses,
and compute the probability of occurance of event 'Heads'
"""

import random

def toss(lim):
    num = res = 0
    for i in range(0, lim):
        res = random.randint(0, 1) # Head = 1, Tail = 0
        if res == 1: num += 1
    print("Number of Heads occured: ", num, "\nProbability: ", (num/lim))
           
choice = int(input("Enter number of tosses: "))
toss(choice)