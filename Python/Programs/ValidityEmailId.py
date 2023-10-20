# PYTHON PROGRAM TO CHECK THE VALIDITY OF AN EMAIL BY VERIFYING IT'S FORMAT

firstHalf = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789'
vendor = 'gmail, icloud, github, sjcet, outlook' # just a sample items
domain = 'com, in, ac, ac.in, net'

def checkMail():
    part_one = email.split('@') # now email splitted into 'ajaytshaju', 'gmail.com' // output: ['ajaytshaju', 'gmail.com']
    part_two = part_one[1].split('.') # now 'gmail.com' becomes 'gmail', 'com' // output: ['gmail', 'com']

    for i in part_one[0]: # checking first half i.e 'ajaytshaju'
        if i not in firstHalf:
            print("Problem in first half.", end=" ")
            return 0

    for j in part_two[0]: # checking middle half of 'gmail.com' which is 'gmail'
        if j not in vendor:
            print("Problem in middle half.", end=" ")
            return 0

    for k in part_two[1]: # checking second half of 'gmail.com' which is 'com'
        if k not in domain:
            print("Problem in last half.", end=" ")
            return 0
    return 1 # no errors found in the input email                  

# __Driver Code__
while True: # for recurrent inputting
    email = input("Enter an Email: ") # getting email, eg - ajaytshaju@gmail.com
    
    if "@" in email: # checking for '@'
        if "." in email: # checking for '.'
            print("Valid Email") if checkMail() else print("So, Invalid Email")  # passes every checking, if-else shorthand used
        else: print("No '.' between vendor name & domain") # if no '.' found
    else: print("No '@' after first part") # if no '@' found
    if input("Again? y/n: ") == 'n':
        break