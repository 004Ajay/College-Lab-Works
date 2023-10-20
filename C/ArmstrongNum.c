//C program to find whether a number is armstrong number or not

#include<stdio.h>
int main(){    
int number,remainder,sum=0,temp;    
printf("Enter the number=");    
scanf("%d",&number);    
temp=number;    
while(number>0){    
remainder = number % 10;    
sum=sum+(remainder * remainder * remainder);
number=number/10;    
}    

if(temp == sum)    
printf("%d is an armstrong number", temp);    
else    
printf("%d is not an armstrong number", temp);    
return 0;  
}