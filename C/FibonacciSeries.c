//C Program to calculate Fibonacci Series
#include <stdio.h>

int main(){
int num1=0, num2=1, num3, limit, i; //Manually entering first two numbers for initial starting
    printf("Enter the limit: ");
    scanf("%d", &limit); //Getting limit
    
    printf("%d   %d", num1, num2); //Printing first two numbers
    
    for(i=2; i<limit; i++){
        num3 = num1 + num2;
        printf("    %d",num3); //Printing next numbers upto entered limit
        num1 = num2; //Updating num1
        num2 = num3; //Updating num2
    }
    
    
    return 0;
}