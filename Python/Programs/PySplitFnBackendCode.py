# A code to demonstrate the backend code of python's split() function

word = 'abc@xyz com ijk@34 klm'
delim = '@'
# Output with space (' ') => ['abc@xyz', 'com', 'ijk@34', 'klm']

# My methods of storing indexes of delimiter, then use the same indexes to slice the input word

def split_fn(sen, delim):
    if delim not in word: # when delimiter absent in the input word 
        print("Output: ", word)
    else:    
        res = []
        delim_indexes = []
        
        for idx, lttr in enumerate(word):
            if lttr == delim:
                delim_indexes.append(idx) # storing indexes of delimiters
        
        for i in range(len(delim_indexes)):
            if delim_indexes[i] == delim_indexes[0]: # for the first delimiter, print from word's starting to that delimiter's index
                res.append(sen[:delim_indexes[i]])
            if delim_indexes[i] == delim_indexes[-1]: # for the last delimiter, print from the delimiter's index to word's ending
                res.append(sen[delim_indexes[i]+1:])
            else:
                res.append(sen[delim_indexes[i]+1:delim_indexes[i+1]]) # for the middile delimiters, print from previous
                                                                       # delimiter's index + 1 to next delimiter's index
            
        print("Output: ", list(res))    

print("Input: ", word)
split_fn(word, delim)

# ------------------------------------------------------------------------------------------------------------

word = 'abc@xyz com ijk@34 klm'
delim = '@'

# ChatGPT's method - using a variable(start) to slice the input word when a delimiter is found
def split_fn(sen, delim):
    res = []
    start = 0
    
    # Traverse the string to split on the delimiter
    for idx, lttr in enumerate(sen):
        if lttr == delim:
            res.append(sen[start:idx])  # Append substring before the delimiter
            start = idx + 1  # Move past the delimiter
    
    # Append the last part after the last delimiter
    res.append(sen[start:])
    
    print("Output:", res)

print("Input:", word)
split_fn(word, delim)