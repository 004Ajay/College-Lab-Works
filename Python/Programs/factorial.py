# Python program to find factorial of a number

num = int(input("Enter a number: "))
fact = 1
for i in range(1,num + 1):
    fact = fact * i
print(f"{num}! = {fact}")


"""
# short code

def fact(n):
    return n * fact(n - 1) if n > 1 else 1 # recusrsive and one-liner for finding factorial of argument   
print("5! = ", fact(5)) # sample

"""
