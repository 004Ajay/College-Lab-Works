# > Touch data.txt

# > nano data.txt

# DEAR BEAR RIVER CAR CAR RIVER DEAR CAR BEAR (Input this sentence when you're inside nano editor)

# ctrl + s, ctrl + x, yes (To save and exit nano)

# > touch mapper.py

# > nano mapper.py

# Input these line to mapper.py file

import sys

for line in sys.stdin:
    line = line.strip()
    words = line.split()
    for word in words:
        print(f"{word}\t{1}")

# > cat mapper.py (To view your mapper.py file)

# > touch reducer.py

# > nano reducer.py

# Input these line to reducer.py file

from operator import itemgetter
import sys

current_word = None
current_count = 0
word = None

for line in sys.stdin:
    line = line.strip()
    word, count = line.split("\t", 1)
    try:
        count = int(count)
    except ValueError:
        continue

    if current_word == word:
        current_count += count
    else:
        if current_word:
            print(f"{current_word}\t{current_count}")
        current_count = count
        current_word = word
if current_word == word:
    print(f"{current_word}\t{current_count}")            

# > cat reducer.py (To view your reducer.py file)

# > cat data.txt | python mapper.py | sort -kl, l | python reducer.py

# Output:
# BEAR   2
# CAR    3
# DEAR   2
# RIVER  2