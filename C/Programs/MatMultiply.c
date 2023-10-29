//Matrix multiplication using function

//Function to print Matrices.
#include <stdio.h>
//Function to Print Matrix
int PrintMatrix(int print[10][10], int rows, int columns){
    int i, j;
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
        printf("\t%d", print[i][j]);
        }
    printf("\n");
    }
}

//Function to Multiply Matrices.
int MultiplyMatrix(int matrix1[10][10], int matrix2[10][10], int Multiplied[10][10], int row1, int column1, int row2, int column2){
    int i, j, k;
    for(i=0; i<row1; i++){
        for(j=0; j<column1 ; j++){
            Multiplied[i][j]=0;
            for(k=0; k<column1 ; k++){
                Multiplied[i][j]=Multiplied[i][j]+matrix1[i][k]*matrix2[k][j];
            }
        }
    }
}

int main(){
int matrix1[10][10], matrix2[10][10], Multiplied[10][10];
int i, j, row1, column1, row2, column2;
printf("Enter no. of rows & columns of Matrix 1: "); //Entering no. of Rows & Columns of 1st Matrix
scanf("%d %d", &row1, &column1);
printf("Enter no. of rows & columns of Matrix 2: "); //Entering no. of Columns & Rows of 1st Matrix
scanf("%d %d", &row2, &column2);

if(row1==column2)
    printf("\n\nMatrix can be Multiplied.");
else
    printf("\n\nMatrix cannot be Multiplied. As Row of 1st Matrix not equal to Column of 2nd Matrix");

            //Simultaneously getting values of 1st & 2nd Matrices.
            printf("\n\n\nEnter value of 1st Matrix\n");

            for(i=0; i<row1; i++){
            for(j=0; j<column1; j++){
            printf("\nEnter Matrix1[%d][%d] value: ", i, j);
            scanf("%d", &matrix1[i][j]);
                                    }
                                 }
            printf("\n\n\nEnter value of 2nd Matrix\n");     
            for(i=0; i<row2; i++){
            for(j=0; j<column2; j++){
            printf("\nEnter Matrix2[%d][%d] value: ", i, j);
            scanf("%d", &matrix2[i][j]);
                                    }
            }
                                    
    //Printing Product of Matrix 1 & 2.
    printf("\nProduct of Matrices\n");
    MultiplyMatrix(matrix1, matrix2, Multiplied, row1, column1, row2, column2);
    PrintMatrix(Multiplied, row1, column2);

    return 0;
}