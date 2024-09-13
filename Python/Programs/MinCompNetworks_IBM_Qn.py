lst = [5,7,9,12,10,13]
sum_val = 15
min_vals = 2

count = 0
stk = []

for i in lst:
    stk.append(i) # adding elements of lst one by one to stack
    print("stk sample print: ", stk)
    
    if len(stk) >= min_vals and sum(stk) > sum_val:
        print("stk MAIN:", stk)
        count += 1 # as we got the match as per condition of min and sum values 
        print("NEW COUNT: ", count)
        lst.pop(lst.index(stk[0])) # deleting first element of stack from main list
        stk.clear() # emptying the stack as we got the match
        
print("\nFinal Count: ", count)       