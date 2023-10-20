//C Program to perform Matrix Subtraction.

#include <stdio.h>
//Function to print Matrix.
int PrintMatrix(int p[10][10], int rows, int columns){
    int i, j;
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
        printf("\t%d", p[i][j]);
        }
    printf("\n");
    }
}

//Function to Subtract Matrix.
int AddMatrix(int matrix1[10][10], int matrix2[10][10], int matrix3[10][10], int rows, int columns){
    int i, j;
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
        matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

//Main Function
int main(){
int matrix1[10][10], matrix2[10][10], matrix3[10][10];
int i, j, rows, columns, p, a;
printf("Enter no. of rows & columns:"); //Getting no. of Rows & Columns
scanf("%d %d", &rows, &columns);

//Getting values of 1st Matrix.
printf("\n\n\nEnter value of 1st Matrix\n");
for(i=0; i < rows; i++){
    for(j=0; j< columns; j++){
        printf("\nEnter Matrix1[%d][%d] value:", i, j);
        scanf("%d", &matrix1[i][j]);
    }
}
//Getting values of 2nd Matrix.
printf("\n\n\nEnter value of 2nd Matrix\n");
for(i=0; i < rows; i++){
    for(j=0; j< columns; j++){
        printf("\nEnter Matrix2[%d][%d] value:", i, j);
        scanf("%d", &matrix2[i][j]);
    }
}

//Printing Matrix 1
printf("\t\t\nInput Matrix 1\n");
PrintMatrix(matrix1, rows, columns);

//Printing Matrix 2
printf("\t\t\nInput Matrix 2\n");
PrintMatrix(matrix2, rows, columns);

//Printing Difference of Matrix 1 & 2
printf("\t\t\nSum of Matrics\n");
AddMatrix(matrix1, matrix2, matrix3, rows, columns);
PrintMatrix(matrix3, rows, columns);
}