# PYTHON PROGRAM TO GET NUMBERS AS TUPLES & SEPARATE EVEN & ODD NUMBERS THEN, PRINT THEM AS TUPLES

num = tuple(map(int,input("Enter numbers: ").split()))
even = []
odd = []
print("Input: ", num)
for i in range(len(num)):
    if (num[i] % 2 == 0):
        even.append(num[i])
    else:
        odd.append(num[i])

print("Even numbers: ", tuple(even))
print("Odd numbers: ", tuple(odd))