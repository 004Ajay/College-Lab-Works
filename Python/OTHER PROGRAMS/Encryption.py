m=input()
n=input()
s=''
for i in range(65,91):
  s+=chr(i)
ans=''
for i in m:
  c=s.index(i)
  cj=(c+5)%26 
  ans+=s[cj]
if(sorted(n)==sorted(ans)):
  print("Yes",end='')
else:
  print("No",end='')
