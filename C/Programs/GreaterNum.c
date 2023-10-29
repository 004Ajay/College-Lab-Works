// C Program to find largest among two integers

#include <stdio.h>
int main(void) {
    int num1, num2; //declaring two integers
    //getting two numbers separately
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("\n");
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("\n");
    if(num1>num2){ //conditional statements used
    	printf("The First Number, '%d' is Greater.", num1);
    }
    else{ //else case doesn't need condition, it's logical in IF condition itself
        printf("The Second Number, '%d' is Greater.", num2);
        }
	return 0;
}