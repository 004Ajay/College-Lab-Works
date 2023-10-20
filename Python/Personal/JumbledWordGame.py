import random

words = ['rainbow', 'computer', 'science', 'programming', 'mathematics', 'player', 'condition', 'reverse', 'water', 'board']


def pick_jumble(): # picking, jumbling & printing a random word from words list
    pick = random.choice(words)
    print("Jumbled Word: ", "".join(random.sample(pick, len(pick))))
    return pick


def next_move(): # Getting user's choice of next move with error catching using try-except
    try:
        numb = int(input('Press 1) Guess again 2) New question 3) Exit : '))
    except:
        print('Wrong Input. Try Again')
        numb = next_move()
    return numb        


def guess(picked_word): # User guessing word
    ans = input('Your guess: ')
    if ans == picked_word:
        print(f'Yes, {ans} is correct...')
    else:
        print('Sorry, the answer is wrong.')
        nxt = next_move()
        if nxt == 1:
            guess(picked_word)
        elif nxt == 2:
            main()
        elif nxt == 3:
            print('Exited.\n')
            exit()
        else:
            print('Input is out of range\nPlease guess again')
            guess(picked_word)

def main(): # Main function
    print("\nJumbled Word Guessing Game.\n")
    while True:
        picked_word = pick_jumble() # picking, jumbling & printing a random word
        guess(picked_word)
        if input("Playing again? : ") != 'y':
            print('Exited.\n')
            break

if __name__ == '__main__': # main function call
    main()