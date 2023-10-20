def findLongestPalindrome(strr):
	count = [0]*256
	for i in range(len(strr)):
		count[ord(strr[i])] += 1
	beg = ""
	mid = ""
	end = ""
	ch = ord('a')
	while ch <= ord('z'):
		if (count[ch] & 1):
			mid = ch
			count[ch] -= 1
			ch -= 1
		else:
			for i in range(count[ch]//2):
				beg += chr(ch)
		ch += 1
	end = beg
	end = end[::-1]
	return beg + chr(mid) + end
n=int(input())
L=[]
for a in range(n):
      L.append(len(findLongestPalindrome(input())))
for b in L:
      print(b)

