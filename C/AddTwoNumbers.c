// C Program to add two numbers

#include <stdio.h>
int main(){
    int num1, num2; //getting two numbers
    printf("Enter two Numbers: ");
    scanf("%d %d", &num1, &num2); //getting numbers

    printf("%d + %d = %d", num1, num2, num1+num2); //adding numbers and output
    return 0;
}