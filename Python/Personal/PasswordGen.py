import random

def getLeng(): # if user enters anything other than integer
    try:
        leng = int(input("Enter password length: "))
    except:
        print('Wrong Input. Try Again') 
        leng = getLeng()
    return int(leng)    

def password():
    pw = ''
    letters = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-=_+,./<>?:;[{]}\|`~'
    for i in range(getLeng()):
        pw += random.choice(letters)
    print(pw)

def main():
    while True:
        password()
        if input("\nAgain? y/n: ") != 'y':
            break
    print("Go to passwordmonster.com to check password strength.")

if __name__ == "__main__":
    main()    