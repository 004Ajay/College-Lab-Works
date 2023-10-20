# swap values in variables
a = 10
b = 20
print(f'\nBefore swapping:\na: {a}\tb: {b}\n')
a, b = b, a # one liner to swap values in variables
print(f'After swapping:\na: {a}\tb: {b}\n')

# --------------------------------------------------------------------------------- #

# if-else 
print("\nEven\n") if int(input("\nNumber: ")) % 2 == 0 else print("\nOdd\n")

# --------------------------------------------------------------------------------- #

# Initializing multiple lsits and variables
a, b, c, d = [1,2,3], 'program', [8,3,22], 23
print(f'\na: {a}\nb: {b}\nc: {c}\nd: {d}')

# --------------------------------------------------------------------------------- #

# list comprehension
sq = [i*i for i in range(11)]
print(sq)

# --------------------------------------------------------------------------------- #

# print list without brackets
data = [1, 3, 5, 4, 2]
print(*data)

# --------------------------------------------------------------------------------- #

# print reverse of a list
data = [1, 2, 3, 4, 5]
print(data[::-1])

# --------------------------------------------------------------------------------- #

# print reverse of a list
data = [1, 2, 3, 4, 5]
print(data[::-1])

# --------------------------------------------------------------------------------- #

# print star pattern
for i in range(6): print('*' * i)

# --------------------------------------------------------------------------------- #

# print vale of fibonacci series
def fib(n):  return n if n < 2 else fib(n-1) + fib(n-2)
print(fib(7))

# --------------------------------------------------------------------------------- #

# Simple Calculator

print(eval(input("Enter expression:")))

# --------------------------------------------------------------------------------- #

# 