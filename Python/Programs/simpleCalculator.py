a, b = input("Enter two numbers: ").split()
num1, num2 = int(a), int(b)

choice = int(input("Press\n1: Addition\n2: Subtraction\n3: Multiplication\n4: Division\nChoice: "))

if choice == 1:
    print(f"{num1} + {num2} = {num1+num2}")
elif choice == 2:
    print(f"{num1} - {num2} = {num1-num2}")
elif choice == 3:
    print(f"{num1} * {num2} = {num1*num2}")
elif choice == 4:
    print(f"{num1} / {num2} = {num1/num2}")
else:
    print(f"{choice} is out of range")    