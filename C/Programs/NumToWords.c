#include<stdio.h>

int main(){  
int num, rev, rem, sum=0;    

printf("Number: ");    
scanf("%d",&num);    //getting input number

while(num>0){    
rem = num % 10;    
sum = sum * 10 + rem;    //Reversing the input number
num = num / 10;    
}    

num = sum; //setting sum to num
printf("Character: ");
while(num > 0){    
rem = num % 10;    //Getting last digit

switch(rem){  //checking and printing last digit  
case 1: printf("One ");    
        break;    
case 2: printf("Two ");    
        break;    
case 3: printf("Three ");    
        break;    
case 4: printf("Four ");    
        break;    
case 5: printf("Five ");    
        break;    
case 6: printf("Six ");    
        break;    
case 7: printf("Seven ");    
        break;    
case 8: printf("Eight ");    
        break;    
case 9: printf("Nine ");    
        break;
case 0: printf("Zero ");    
        break;                
default: printf("Error encountered!!!");    
         break;    
}    
num=num/10;   //incrementing number
}    
return 0;  
}  