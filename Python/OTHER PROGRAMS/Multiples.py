l = list(map(int,input().split()))
count = 0
for i in range(len(l)):
   if l[i]%3 == 0:
       count = count + 1
   elif l[i]%5 == 0:
       count = count + 1
print(count, end='')