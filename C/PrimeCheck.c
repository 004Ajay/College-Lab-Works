//C program to find whether a number is prime or not

#include<stdio.h>
int main(){
    int number, i, factorial=1;
    printf("Enter a number: ");
    scanf("%d", &number); //getting number

    //checking prime number or not
    for(i=2; i<=number/2; i++){
    if(number % i == 0){
      printf("%d is not a prime number", number);
      break;
    }
    else
      printf("%d is a prime number", number);
      break;    
    }
    return 0;
}