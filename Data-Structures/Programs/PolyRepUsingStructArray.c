//C program for Representing polynomial using Struct & Arrays

#include<stdio.h>
struct polynomial{
    int coefficient;
    int exponent;
};          

//polynomials declaration
struct polynomial a[50],b[50];

int main(){
   int degree1,degree2;
   int i, k=0;

   printf("Enter the highest degree of polynomial: ");
   scanf("%d",&degree1);        
   
   printf("\nEnter Polynomial\n");
   for(i=0; i <= degree1; i++){   //getting polynomial 1 terms from the user
       printf("\nEnter the exponent: ");
       scanf("%d", &a[i].exponent); //entering values in coefficient of the polynomial terms
       printf("\nEnter it's coefficient: ");
       scanf("%d", &a[i].coefficient); //entering values in coefficient of the polynomial terms
   }

   //printing the polynomial
   printf("\nExpression = %dx^%d", a[0].coefficient, a[0].exponent);
   for(i=1; i <= degree1; i++){
       printf(" + %dx^%d", a[i].coefficient, a[i].exponent);
   }        
printf("\n");
return 0;
}
