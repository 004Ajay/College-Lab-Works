/*
The patter to be printed, if rows == 10
*
**
* *
*  *
*   *
*    *
*     *
*      *
*       *
**********
*/


#include <stdio.h>  
int main(){  
    int rows, i, j;  
    printf("Enter the number of rows: ");  
    scanf("%d",&rows);  
    for(i=1; i<=rows; i++){  
        for(j=1; j<=i; j++){  
        if(j==1 || i==j || i==rows )   
            printf("*");    
        else  
        printf(" ");  
        }  
        printf("\n");  
    }  
    return 0;  
}  