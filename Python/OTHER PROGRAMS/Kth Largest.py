l = list(map(int, input().split()))
k = int(input())
l.sort(reverse=True)
print(l[k-1],end='')