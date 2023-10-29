//C Program to calculate sum of digits of a number

#include <stdio.h>
int main(){
  int num, remainder, original, sum=0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    original = num;

    // logic to count number of digits
    while (num != 0){
        remainder = num % 10;
        sum = sum + remainder;
        num /= 10;
    }
    printf("Sum of digits of %d is %d.", original, sum);
    return 0;
}