s=input()
a=input().split()
b=""
for i in a:
  b+=i
if(set(s)==set(b) and len(s)==len(b)):
  print("Yes",end="")
else:
  print("No",end="")