n=int(input())
for i in range(1,n+1):
  for j in range(1,i+1):
      print(j,end="")
      if i==j:
        for k in range(i-1,0,-1):
            print(k,end="") 
  if i!=n:
    print("")