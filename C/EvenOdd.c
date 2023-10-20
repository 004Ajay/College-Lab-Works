//C Program to check whether a number is Odd or Even using switch

#include <stdio.h>
int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    switch (num % 2){ //Expression of switch outputs the remainder.
    case 0:
        printf("%d is EVEN", num);
        break;
    default:
        printf("%d is ODD", num);
        break;
    }
	return 0;
}