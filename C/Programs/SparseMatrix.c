// C Program to check & print values of a sparse matrix

#include <stdio.h>
int matrix[10][10], rows, columns, i, j;

int main(){ //Main Function

printf("Enter no. of rows & columns: ");
scanf("%d %d", &rows, &columns); //Getting no. of Rows & Columns

// Getting matrix
for(i=0; i < rows; i++){
    for(j=0; j < columns; j++){
        printf("\nEnter Matrix[%d][%d] value: ", i, j);
        scanf("%d", &matrix[i][j]); //getting the matrix
    }
}

// Printing matrix
printf("\nEntered Matrix:\n");
for(i=0; i < rows; i++){
    for(j=0; j < columns; j++){
        printf("%d  ", matrix[i][j]); //getting the matrix 
    }
printf("\n");    
}

// Checking & Printing Sparse Matrix values
printf("\nVALUE\tROW\tCOLUMN\n");
for(i=0; i < rows; i++){
    for(j=0; j < columns; j++){
        if(matrix[i][j] != 0)
        printf("%d\t%d\t%d\n", matrix[i][j], i, j);
    }
}

}