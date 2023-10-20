import random

movies = [
          'trance', 'forensic', 'shylock', 'the kung fu master', 'big brother', 'lucifer', 'brothers day',
          'cold case', 'cbi', 'one', 'home', 'the priest', 'malik', 'the great indian kitchen', 'salute',
          'joseph', 'night drive', 'traffic', 'classmates', 'bangalore days', 'sunny', 'joji', 'take off',
          'godfather', 'ramji rao speaking', 'his highness abdullah', 'uncle bun', 'johny walker', 'hitler',
          'superman', 'the car', 'summer in bethlehem', 'punjabi house', 'crime file', 'friends'
         ]



def create_question(movie):
    n = len(movie)
    letters = list(movie)
    temp = []
    for i in range(n):
        if letters[i] == ' ':
            temp.append(' ')
        else:
            temp.append('*')
    qn = ''.join(str(x) for x in temp)
    return qn
    
def is_present(letter, movie):
    c=movie.count(letter)
    if c == 0:
        return False
    else:
        return True
        
def unlock(qn, movie, letter):
    ref = list(movie)
    qn_list = list(qn)
    temp = []
    n = len(movie)
    for i in range(n):
        if ref[i]=='' or ref[i]==letter:
             temp.append(ref[i])
        else:
            if qn_list[i]=='*':
                temp.append(' _ ')
            else:
                temp.append(ref[i])
    qn_new=''.join(str(x) for x in temp)
    return qn_new
    
def play():
    print("Malayalam Movie Guessing Game\nOnly Malayalam movies with English title are included")
    p1name=input("Player1, Enter your Name: ")
    p2name=input("Player2, Enter your Name: ")
    pp1=0
    pp2=0
    turn=0
    willing=True
    while willing:
        if turn%2==0:
            #Turn of player1
            print(p1name,",it's your turn.")
            picked_movie=random.choice(movies)
            qn=create_question(picked_movie)
            print (qn)
            modified_qn=qn
            not_said=True
            while not_said:
                letter=input("Your letter: ")
                if(is_present(letter, picked_movie)):
                    #unlock
                    modified_qn=unlock(modified_qn, picked_movie, letter)
                    print(modified_qn)
                    d=input("Press 1 to guess the movie or 2 to unlock another letter: ")
                    if d==1:
                        ans=input("Your answer: ")
                        if ans==picked_movie:
                            pp1=pp1+1
                            print("Correct Letter")
                            not_said=False
                            print(p1name, " ,your score: ", pp1)
                        else:
                            print("Wrong Answer, Try again.")
                else:
                    print(letter, " not found")
            c=int(input("press 1 to Continue or 0 to Quit: "))
            if c==0:
                print(p1name, " Your Final Score is ", pp1)
                print(p2name, " Your Final Score is ", pp2)
                print("Thanks for playing.")
                willing=False
                
            else:
                #Turn of player2
                print(p2name,",it's your turn.")
                picked_movie=random.choice(movies)
                qn=create_question(picked_movie)
                print (qn)
            
            not_said=True
            while not_said:
                letter=input("Your letter: ")
                if(is_present(letter, picked_movie)):
                    #unlock
                    modified_qn=unlock(modified_qn, picked_movie, letter)
                    print(modified_qn)
                    d=input("Press 1 to guess the movie or 2 to unlock another letter: ")
                    if d==1:
                        ans=input("Your answer: ")
                        if ans==picked_movie:
                            pp1=pp1+1
                            print("Correct Letter")
                            not_said=False
                            print(p2name, " ,your score: ", pp2)
                        else:
                            print("Wrong Answer, Try again.")
                else:
                    print(letter, " not found")
            c=int(input("press 1 to Continue or 0 to Quit: "))
            if c==0:
                print(p1name, " Your Final Score is ", pp1)
                print(p2name, " Your Final Score is ", pp2)
                print("Thanks for playing.")
                willing=False
        turn=turn+1  
        
play()