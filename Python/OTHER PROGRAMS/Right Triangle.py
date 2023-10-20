a, b, c = list(map(int,input().split()))
if (a*a == b*b + c*c) or (b*b == a*a + c*c) or (c*c == a*a + b*b):
   print("YES",end='')
else:
   print("NO",end='')