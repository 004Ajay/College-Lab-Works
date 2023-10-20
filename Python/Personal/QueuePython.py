# Making Queue Data-Structure using python

queue = []
queueLimit = 10

def push():
    lim = int(input("Enter number of element to push: "))
    if lim > queueLimit:
        print("Input amount is higher than Queue size. Try Again")
        push() 
    else:
        for i in range(lim):
            queue.append(int(input("Enter value: ")))

def display():
    print("Queue element(s):", end=" ")
    try:
        for i in range(queueLimit - 1): # Printing queue elements up to 2nd last
            print(queue[i], end=", ")
        print(queue[queueLimit - 1]) # For last queue element if it exist, else 'try' will process error of 'list index out of range' 
    except:
        print(" ") # blank

def main(): # checks if queue is full by getting queue's length using len()
    print("\nQueue Limit: 10\n")
    while True:
        choice = int(input("Choose any option\n1.EnQueue\n2.DeQueue\n3.Display\n4.Exit\nChoice: "))
        if choice == 1:
            print("Queue is full") if len(queue) == queueLimit else push()
        elif choice == 2:
            print("Queue is empty") if len(queue) == 0 else print("Popped Element: ", queue.pop(0))
        elif choice == 3:
            print("Queue is empty") if len(queue) == 0 else display()
        elif choice == 4:
            print("Exited!\n")
            exit()    
        if input("Continue? y/n : ") != 'y':
            break    

if __name__ == "__main__": # main function call
    main()