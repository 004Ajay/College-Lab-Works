//C program to find factorial of a number

#include<stdio.h>
int main(){
    int num, i, factorial=1;
    printf("Enter a number: ");
    scanf("%d", &num); //getting number

    //logic for factorial
    for(i=1; i<=num; i++){
    factorial = factorial * i;
    }

    printf("%d! = %d", num, factorial); //printing factorial of the number
    return 0;
}