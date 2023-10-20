# M O T H E R => R E H T O M => R+1 = S, E+1 = F...code is S F I U P N

word = input("Enter a word to encode: ")

alp_dict = {'A': 1,'B': 2,'C': 3,'D': 4,'E': 5,'F': 6,'G': 7,'H': 8,'I': 9,'J': 10,'K': 11,'L': 12,'M': 13,'N': 14,'O': 15,'P': 16,'Q': 17,'R': 18,'S': 19,'T': 20,'U': 21,'V': 22,'W': 23,'X': 24,'Y': 25,'Z': 26}

cap_word = word.upper()
print(f'You inputted: {cap_word}')

rev = cap_word[::-1]
print(f'Reversed Word: {rev}')

word_num_list = [str(alp_dict.get(i)) for i in rev]
print(f'Integer version of reveresed word:  {word_num_list}')

code = ''
for i in word_num_list:
    val = int(i) + 1
    for key, value in alp_dict.items():
        if val == value:
            code += key
print(f'Encoded form of {cap_word} : {code}')
