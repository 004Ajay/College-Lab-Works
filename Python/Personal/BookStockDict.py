# Python Program to simulate the working of a book stock keeping software

"""
update() - used to add new item to dictionary
in - used to check whether the dictionary has the element entered before 'in', eg: name in database
pop() - used to delete an entry from dictionary

"""

stock = {
    "The Brain": 30,
    "Hooked": 150,
    "Quiet": 70,
}

# Function to update stocks
def stock_updation():
    while True:  
        print(stock) # showing list for giving name in next line
        update_book = input("Enter book name to update: ")
        if update_book in stock: # checks if book exist in dictionary
            count = int(input("Enter book count: "))
            stock[update_book] = count  # changes value of corresponding book
            print("Updation Successful\nNew List: ", stock)
            if input("Updating Again? y/n : ") != 'y':
                break
        else:
            print("No such book found.")
            if input("Trying again? y/n : ") != 'y':
                break

# Function to add new stocks
def stock_addition():
    while True:
        new_book = input("Enter book name to add: ")
        value = int(input("Enter new quantity: "))
        stock.update({new_book:value}) # adds new book to stock using update()
        print("Addition Successful\nNew List: ", stock)
        if input("Adding again? y/n : ") != 'y':
            break
            
# Function to delete a stock completely
def full_deletion():
    while True:
        print(stock) # shwoing list for giving name in next line
        del_book = input("Enter name of book to delete: ")
        if del_book in stock: # checks if book exist in dictionary
            stock.pop(del_book) # deletes the entry using pop()
            print("Deletion Successful\nNew List: ", stock)
            if input("Deleting Again? y/n : ") != 'y':
                break
        else:
            print("No such book found.")
            if input("Trying again? y/n : ") != 'y':
                break
 
# __Driver Code__
while True:
 print("\n1: Stock Updation\n2: New Stock Addition\n3: Full Deletion\n4: List view\n")
 choice = int(input("choice: "))

 if choice == 1:
     stock_updation()

 elif choice == 2:
     stock_addition()

 elif choice == 3:
     full_deletion()

 elif choice == 4:
     print("Current List: ", stock)

 else:
     print("Choice is out of range")

 if input("All Again? y/n : ") != 'y':
     break     