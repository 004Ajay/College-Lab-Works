con=input().split(",")
throw=input().split(",")
d={}
for c in con:
  y=c.split(":")
  d[int(y[0])]=int(y[1])
p=0
for t in throw:
  p+=int(t)
  if p in d.keys():
    p=d[p]
if p>99:
  print("Yes",end="")
else:
  print("No",end="")
