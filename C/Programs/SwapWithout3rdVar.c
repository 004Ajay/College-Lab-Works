// C Program to swap numbers without 3rd variable

#include <stdio.h>
int main() {
    int num1, num2; //only num1 & num2 as inputs
    printf("Enter num1 & num2: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping num1: %d & num2: %d\n", num1, num2); //printing inputs
    
    //swapping logic without 3rd variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swapping num1: %d & num2: %d", num1, num2); //printing swapped numbers
    return 0;
}