//C Program to reverse a number

#include <stdio.h>
int main(){
  int num, remainder, original, reversed=0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    original = num;

    // logic to count number of digits
    while (num != 0){
        remainder = num % 10;
        reversed = (reversed*10) + remainder;
        num /= 10;
    }
    printf("Reverse of %d is %d.", original, reversed);
    return 0;
}