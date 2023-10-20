//C Program to calculate number of digits in a number

#include <stdio.h>
int main(){
  int num, remainder, original, digit=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;

    // logic to count number of digits
    while (num != 0){
        remainder = num % 10;
        num /= 10;
        digit++;
    }
    printf("Number of digits in %d is %d.", original, digit);
    return 0;
}