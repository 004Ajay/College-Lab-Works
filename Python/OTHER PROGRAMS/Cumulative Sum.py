lis=list(map(int, input().split()))
new_lis=[]
j=0
for i in range(0,len(lis)):
	j+=lis[i]
	new_lis.append(j)
for x in range(len(new_lis)):
    print (new_lis[x], end=" ")
