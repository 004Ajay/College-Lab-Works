# Python program to calculate 'Coefficient Of Determination'

X = [42, 34, 25, 35, 37, 38, 31, 33, 19, 29, 38, 28, 29, 36, 18] # X from our Question
Y = [18, 6, 0, -1, 13, 14, 7, 7, -9, 8, 8, 5, 3, 14, -7] # Y from our Question

Y_mean = sum(Y) / len(Y) # Finding mean of Y
Y_cap, Y_sq, Y_mean_sq = [], [], [] # Declaring multiple lists

# For ŷ
for i in X:
    each_y_cap = -24.704 + (0.9674 * i) # Custom value for calculation
    Y_cap.append(round(each_y_cap, 4))

# For (Y - Y_cap)^2 & (Y - Y_mean)^2
for i in range(len(Y)):
    val = (Y[i] - Y_cap[i]) ** 2 # Squaring
    m_val = (Y[i] - Y_mean) ** 2
    Y_sq.append(round(val, 4)) # Appending to list
    Y_mean_sq.append(round(m_val, 4))
   
Y_sq_sum = round(sum(Y_sq), 4) # SSE
Y_mean_sq_sum = round(sum(Y_mean_sq), 4) # SSR
SST = Y_sq_sum + Y_mean_sq_sum # SST
R_sq = 1-(Y_sq_sum/SST) # R^2

print("x\t\ty\t\t  ŷ\t       (y - ŷ)^2\t(y - ȳ)^2") # Printing headings
for i in range(len(Y_cap)):
    print(f"{'-'* 75}\n{X[i]}\t|\t{Y[i]}\t|\t{Y_cap[i]}\t |\t{Y_sq[i]}\t   |\t{Y_mean_sq[i]}") # Printing Table
print(f"\nΣ(y - ŷ)^2: {Y_sq_sum}\tΣ(y - ȳ)^2: {Y_mean_sq_sum}\tSST: {SST}\tR^2: {round(R_sq, 4)}") # Printing final values