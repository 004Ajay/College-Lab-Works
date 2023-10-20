# PYTHON PROGRAM TO REMOVE THE OCCURANCE OF A NUMBER IN A LIST


list = map(int, input("Enter list: ").split())
num = int(input("Enter num to remove: "))

for i in list:
    if(i != num): print(i)


"""
new = [1, 2, 3, 1, 3, 3, 4, 1, 5, 4, 4, 2, 3, 2, 2, 3, 3, 4, 4, 5]

num = int(input("Number: "))

print(new)

for i in new[:]:
    if i == num:
        new.remove(i)
        
print(new) 
"""    