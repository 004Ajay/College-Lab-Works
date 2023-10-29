// C Program to swap numbers with 3rd variable

#include <stdio.h>
int main() {
    int num1, num2, temp; //temp variable for temporary storage
    printf("Enter num1 & num2: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping num1: %d & num2: %d\n", num1, num2); //printing inputs
    
    //swapping logic
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping num1: %d & num2: %d", num1, num2); //printing swapped numbers
    return 0;
}