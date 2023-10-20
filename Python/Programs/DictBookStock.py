# Python program to do book stock keeping using Dictionary 

stock = { 'Brain': 45, 'Rich Dad':20 }
print("Default list:",stock)
stock.update (Brain = 35) # updating dict
print('Updated list:', stock)
popped = stock. popitem() # popping an item
print("Deleted item:", popped)
print("New List:", stock)
stock.update({'Human':55}) # Adding new item to dict
print("Final List:", stock)