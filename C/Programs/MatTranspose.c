//C Program to do Matrix Transposing.

#include <stdio.h>

//Function to print Matrix.
int PrintMatrix(int print[10][10], int rows, int columns){
    int i, j;
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
        printf("\t%d", print[i][j]);
        }
    printf("\n");
    }
}

//Function to take Transpose of Matrix
int TransposeMatrix(int tp[10][10], int rows, int columns){
    int i, j;
    for (int i=0; i<columns; i++){
            for (int j=0; j<rows; j++){
                    printf("\t%d", tp[j][i]);
                    }
    printf("\n");
    }
}

int main(){
int matrix[10][10];
int i, j, rows, columns;
printf("Enter no. of rows & column:"); //Getting no. of Rows & Columns
scanf("%d %d", &columns, &rows);

//Getting values of the Matrix.
printf("\n\n\nEnter value of the Matrix\n");

for(i=0; i<rows; i++){
    for(j=0; j<columns; j++){
        printf("\nEnter Matrix[%d][%d] value:", i, j);
        scanf("%d", &matrix[i][j]);
    }
}

//Printing Matrix 1
printf("\t\t\nInput Matrix 1\n");
PrintMatrix(matrix, rows, columns);

//Printing Transpose of Matrix
printf("\t\t\nTranspose of Matrix 1\n");
TransposeMatrix(matrix, rows, columns);
}