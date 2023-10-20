// C program to check whether an input matrix is Diagonal Matrix or not

/*
Diagonal Matrix is a matrix in which all the elements except the diagonal
elements are zero.
*/

#include <stdio.h>
int main(){
    int mat[10][10], i, j, row, column, flag=0;
    printf("Enter no. of rows and columns:");
    scanf("%d %d",&row,&column);
    if(row==column){
        printf("Enter matrix elements\n");
    for (i=0; i<row; i++){
        for (j=0; j<column; j++){
          printf ("Enter element[%d][%d] : ", i, j);
          scanf("%d",&mat[i][j]);
            }
    }
    //printing the Input Matrix for verification.
    printf("Input matrix\n");
    for (i=0; i<row; i++){
        for (j=0; j<column; j++){
          printf (" %d", mat[i][j]);
    }
    printf("\n");
    }
    for (i=0; i<row; i++){  
        for (j=0; j<column; j++){
          if (mat[i][j] != 0 && i != j){
          flag=1;
          break;
          }
        } 
    }
    if(flag==1){
        printf("The matrix is not diagonal");
               }
    else{
        printf("The matrix is diagonal");
        }
    }
    else{
        printf("\nInput denied!\nThe Row & Column values doesn't form a Square Matrix.\nTherefore, it doesn't form a Diagonal Matrix.");
    }
  return 0;    
}