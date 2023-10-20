n=int(input())
mat=[]
f=0
for i in range(n):
  mat.append(input().split())
#print(mat)
for a in range(len(mat)):
  for b in range(n):
    if mat[a][b]!=mat[b][a]:
      f=1
if f==0:
  print("Yes",end="")
else:
  print("No",end="")

#Given a N X N square matrix, determine if it is a Symmetric Matrix.


  