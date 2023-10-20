import webbrowser

sites = ['wikipedia', 'python'] # put your search keywords

for term in sites:
    url = f'https://www.google.com/search?q={term}'
    webbrowser.open_new_tab(url)

"""
# -->  if you need to run links  <-- #

import webbrowser
lst = ['https://python.org/', 'https://youtube.com']
for i in lst:
    webbrowser.open_new_tab(i)

"""    