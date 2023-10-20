//C Program of a Matrix Calculator
//Printing, Addition, Multiplication & Transpose.

#include <stdio.h>
//Function to print Matrices.
int PrintMatrix(int print[10][10], int rows, int columns){
    int i, j;
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
        printf("\t%d", print[i][j]);
        }
    printf("\n");
    }
}

//Function to Add Matrices.
int AddMatrix(int matrix1[10][10], int matrix2[10][10], int Add[10][10], int rows, int columns){
    int i, j;
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
        Add[i][j]=matrix1[i][j]+matrix2[i][j];
        }
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

//Function to take Transpose of Matrix 1
int TransposeMatrix(int tp[10][10], int rows, int columns){
    int i, j;
    for (int i=0; i<columns; i++){
            for (int j=0; j<rows; j++){
                    printf("\t%d", tp[j][i]);
                    }
    printf("\n");
    }
}

//Main Function for the Program
int main(){
int choice, i, j;    
int row1, column1, row2, column2, rows, columns;
int matrix1[10][10], matrix2[10][10], matrix3[10][10], Multiplied[10][10];

    printf("\t\t\t\tMATRIX CALCULATOR\n");
    printf("Press\n");
    printf("1 : Prints the entered Matrix.\n");
    printf("2 : Sum Calculator.\n");
    printf("3 : Product Calculator.\n");
    printf("4 : Transpose Calculator.\n");
    printf("\nEnter the choice: ");
    scanf("%d", &choice);
    
switch(choice){
    
    case 1: 
            printf("\n\nMatrix Printer\n\n");
            printf("Enter no. of rows:"); //Getting no. of Rows
            scanf("%d", &rows);
            printf("Enter no. of columns:"); //Getting no. of Columns
            scanf("%d", &columns);

            //Simultaneously getting values of 1st & 2nd Matrices.
            printf("\n\n\nEnter value of 1st & 2nd Matrix\n");
            printf("\t\nIn the format 1,2 <enter> 5,3 <enter> 6,9\n");

            for(i=0; i<rows; i++){
            for(j=0; j<columns; j++){
            printf("\nEnter a[%d][%d] value:", i, j);
            scanf("%d, %d", &matrix1[i][j], &matrix2[i][j]);
                                    }
                                 }
            //Printing Matrix 1.
            printf("\t\t\nInput Matrix 1\n");
            PrintMatrix(matrix1, rows, columns);
            
            //Printing Matrix 2.
            printf("\t\t\nInput Matrix 2\n");
            PrintMatrix(matrix2, rows, columns);
            break;
            
    case 2:
            printf("Sum Calculator\n");
            printf("Enter no. of rows:"); //Getting no. of Rows
            scanf("%d", &rows);
            printf("Enter no. of columns:"); //Getting no. of Columns
            scanf("%d", &columns);

            //Simultaneously getting values of 1st & 2nd Matrices.
            printf("\n\n\nEnter value of 1st & 2nd Matrix\n");
            printf("\t\nIn the format 1,2 <enter> 5,3 <enter> 6,9\n");

            for(i=0; i<rows; i++){
            for(j=0; j<columns; j++){
            printf("\nEnter a[%d][%d] value:", i, j);
            scanf("%d, %d", &matrix1[i][j], &matrix2[i][j]);
                                    }
                                 }
            //Printing Sum of Matrix 1 & 2.
            printf("\t\t\nSum of Matrics\n");
            AddMatrix(matrix1, matrix2, matrix3, rows, columns);
            PrintMatrix(matrix3, rows, columns);
            break;
            
    case 3:
            printf("Product Calculator\n");
            printf("Enter no. of rows & columns of Matrix 1: "); //Getting no. of Rows & Columns of 1st Matrix
            scanf("%d %d", &row1, &column1);
            printf("Enter no. of rows & columns of Matrix 2: "); //Getting no. of Columns & Rowsof 1st Matrix
            scanf("%d %d", &row2, &column2);
            printf("\n");
            if(row1==column2){
            printf("\n\nMatrix can be Multiplied.");
                             }
            else{
            printf("\n\nMatrix cannot be Multiplied.");
            printf("\nNumber of Rows of 1st Matrix is not equal to Number of Column of 2nd Matrix\n");
            printf("\nPlease restart to enter new Row & Column value");
                }
                
            //Getting values of 1st Matrix.
            printf("\n\n\nEnter value of 1st Matrix\n");

            for(i=0; i<row1; i++){
            for(j=0; j<column1; j++){
            printf("\nEnter Matrix1[%d][%d] value: ", i, j);
            scanf("%d", &matrix1[i][j]);
                                    }
                                 }
            //Getting values of 2nd Matrix.
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
            break;
            
    case 4:
            printf("Transpose Calculator\n");
            printf("Enter no. of rows:"); //Getting no. of Rows
            scanf("%d", &rows);
            printf("Enter no. of columns:"); //Getting no. of Columns
            scanf("%d", &columns);

            //Getting values of Matrix.
            printf("\n\n\nEnter values of Matrix\n");

            for(i=0; i<rows; i++){
            for(j=0; j<columns; j++){
            printf("\nEnter a[%d][%d] value:", i, j);
            scanf("%d, %d", &matrix1[i][j]);
                                    }
                                 }
            //Printing Input Matrix & it's Transpose.
            printf("\t\t\nInput Matrix\n");
            PrintMatrix(matrix1, rows, columns);
            printf("\t\t\nTranspose of Matrix\n");
            TransposeMatrix(matrix1, rows, columns);
            break;
              }
}

//MORE CALCULATORS CAN BE ADDED...