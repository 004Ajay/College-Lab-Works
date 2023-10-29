//C Program to check whether a number is palindrome or not

#include <stdio.h>
int main() {
  int num, reversed = 0, remainder, original;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;

    // logic to reverse the input number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // printing palindrome if orignal == reversed
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}