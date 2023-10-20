# Anagrams: A meaningful word made by rearranging another word

word1 = input("Enter a word: ").lower()
word2 = input("Enter rearranged word: ").lower()

if sorted(word1) == sorted(word2): # sorting & matching both words
    print(f"{word1} & {word2} are anagrams")
else:
    print(f"{word1} & {word2} are not anagrams")