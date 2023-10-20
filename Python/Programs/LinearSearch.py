# Python program to implement Linear Search Algorithm

lim = int(input("Enter limit: "))

lst = [] # Declaring empty list for storing values

print("Enter List elements: ")
for i in range(lim):
    lst.append(int(input()))

print("Input list: ", lst)

key = int(input("Enter number to search: ")) # Getting search key

found = False
for i in lst:
    if i == key:
        found = True
print(f"{key} is found at index {lst.index(key)}") if found else print(f"{key} not found") # Final statement



"""
# --> For fast result use this, change list items.
lst = [2, 5, 43, 78, 1]
key = 43
found = False
for i in lst:
    if i == key:
        found = True
print(f"{key} is found at index {lst.index(key)}") if found else print("{key} not found")


# For more readability
#if found == True:
#    print(f"{key} is found at index {lst.index(key)}")
#else:
#    print(f"{key} not found")    
"""