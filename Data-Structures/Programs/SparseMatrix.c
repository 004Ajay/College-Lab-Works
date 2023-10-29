#include<stdio.h>
int main(){
int matrix[10][10], i, j, rows, columns, non_zeros = 0;

printf("Enter no. of rows & columns: "); //Getting no. of Rows & Columns
scanf("%d %d", &rows, &columns);

//Getting values of the Matrix.
printf("\n\n\nEnter value of the Matrix\n");
for(i=0; i<rows; i++){
    for(j=0; j<columns; j++){
        printf("\nEnter Matrix[%d][%d] value: ", i, j);
        scanf("%d", &matrix[i][j]);
    }
}

//printing values of the Matrix.
printf("\n\nInput Matrix\n");
for(i=0; i<rows; i++){
    for(j=0; j<columns; j++){
        printf("%d  ", matrix[i][j]);
    }
printf("\n");    
}
printf("\nROW\tCOLUMN\tVALUE\n");
//checking number of zeros
   for(i = 0; i < rows; i++){
      for(j = 0; j < columns; j++){
        if(matrix[i][j] != 0) printf("%d\t%d\t%d\n", i, j, matrix[i][j]);
      }
   }
}