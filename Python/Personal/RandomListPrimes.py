import random

lst, primes, dupe_removed = [], [], []

for i in range(10):
    lst.append(random.randint(1, 10))

for i in lst:
    if i == 0 or i == 1:
        continue
    for j in range(2, i // 2 + 1):
        if i % j == 0:
            break
    else:
        if i not in dupe_removed:
            dupe_removed.append(i)

print(f"Original List: {lst}\n\nPrime numbers in list: {sorted(dupe_removed)}\n")