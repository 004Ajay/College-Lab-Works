matrix1 = []
matrix2 = []
matrix_sum = []

# Function for printing matrix
def print_matrix(matrix, row, column):
    for i in range(len(matrix)):
        for j in range(len(matrix[0])):
            print(matrix[i][j], end = " ")
        print()
       
row = int(input("Enter the number of rows of 1st matrix: "))
column = int(input("Enter the number of columns of 1st matrix: "))

print("Enter the values of matrix 1, one by one (row-wise):")

for i in range(row):        # for loop for getting row values
    a =[]
    for j in range(column):     # for loop for getting column values
        a.append(int(input()))
    matrix1.append(a)

print("Enter the values of matrix 2, one by one (row-wise):")

for i in range(row):        # for loop for getting row values
    a =[]
    for j in range(column):     # for loop for getting column values
        a.append(int(input()))
    matrix2.append(a)

print("\nMatrix1:")    
print_matrix(matrix1, row, column)
print("\nMatrix2:")
print_matrix(matrix2, row, column)

print("\nMatrix sum:")
for i in range(len(matrix1)):
    for j in range(len(matrix1[0])):
        matrix_sum[i][j] = matrix1[i][j] + matrix2[i][j]

print_matrix(matrix_sum, row, column)