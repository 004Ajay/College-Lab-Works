# PYTHON PROGRAM TO REPLACE A WORD IN A SENTENCE BY ANOTHER WORD

sen = input("Enter the sentence: ")
del_word = input("Enter the word to delete: ")
replace_word = input("Enter the word to replace: ")
new_sen = ''

search = sen.split()

for i in search:
    if(i == del_word):
        new_sen += replace_word
    else:
        new_sen += i
print(new_sen)