# Python program to print prime numbers from a file having some numbers

file = open('file.txt', 'r+') # make a 'file.txt' in the current folder
lst = []
for i in file:
    lst.append(int(i))
print("File contents:",lst)
print("prime numbers: ", end="")
for j in lst:
    if j == 0 or j == 1:
        continue
    for i in range(2, j // 2 + 1):
        if j % i == 0:
            break
    else:
        print(j, end = " ")
file.close()