# Making Stack Data-Structure using python

stack = []
StackLimit = 10

def push():
    lim = int(input("Enter number of element to push: "))
    if lim > StackLimit:
        print("Input amount is higher than stack size. Try Again")
        push() 
    else:
        for i in range(lim):
            stack.append(int(input("Enter value: ")))

def display():
    print("Stack element(s):", end=" ")
    try:
        for i in range(StackLimit - 1): # Printing stack elements up to 2nd last
            print(stack[i], end=", ")
        print(stack[StackLimit - 1]) # For last stack element if it exist, else 'try' will process error of 'list index out of range' 
    except:
        print(" ")

def main(): # checks if stack is full by getting stack's length using len()
    print("\nStack Limit: 10\n")
    while True:
        choice = int(input("Choose any option\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\nChoice: "))
        if choice == 1:
            print("Stack is Full") if len(stack) == StackLimit else push()
        elif choice == 2:
            print("Stack is empty") if len(stack) == 0 else print("Popped Element: ", stack.pop())
        elif choice == 3:
            print("Stack is empty") if len(stack) == 0 else display()
        elif choice == 4:
            print("Exited!\n")
            exit()    
        if input("Continue? y/n : ") != 'y':
            break    

if __name__ == "__main__": # main function call
    main()