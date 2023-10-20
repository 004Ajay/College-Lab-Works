# Python Program to play FLAMES Game

name1 = input("Enter first name: ").lower()
name2 = input("Enter second name: ").lower()

joined_name = name1 + name2 # combining both names, eg: ajay & rose = ajayrose

for letter in joined_name:
    if joined_name.count(letter) != 1: # counting common letters
       joined_name = joined_name.replace(letter, "")

res = len(joined_name) % 6  # 6 is the lenght of 'Flames'

flames = ["are Friends", "are Lovers", "has Affection", "will Marry", "are Enemies", "are Siblings"]
print(f"{name1.title()} & {name2.title()} {flames[res - 1]}") # 'flames[res - 1]' as python counts list from 0