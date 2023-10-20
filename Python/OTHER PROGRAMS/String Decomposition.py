s = input()
l = input().split()
sub = ''.join(l)
D_s = {}
D_sub = {}
if len(s) != len(sub):
   print('No',end='')
else:
   for c in s:
       if c not in D_s:
           D_s[c] = 0
       D_s[c] = D_s[c] + 1
   for c in sub:
       if c not in D_sub:
           D_sub[c] = 0
       D_sub[c] = D_sub[c] + 1
   if D_s == D_sub:
       print('Yes',end = '')
   else:
       print('No',end='')