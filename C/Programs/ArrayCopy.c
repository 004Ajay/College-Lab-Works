//C program copy elements of an array to another array
#include<stdio.h>
int main(){
int ArrayOne[10], ArrayTwo[10];
int limit, i;

printf("Enter array limit: ");
scanf("%d", &limit); //getting array size

printf("Enter array elements:\n");
for(i=0; i<limit; i++){
    printf("Element %d: ", i+1);
    scanf("%d", &ArrayOne[i]); //getting array elements
}

for(i=0; i<limit; i++)
    ArrayTwo[i] = ArrayOne[i]; //copying elements of array one to array two
    
printf("Original Elements: ");
for(i=0; i<limit; i++)
   printf("%d  ", ArrayOne[i]); //Printing original elements

printf("\nCopied Elements: ");
for(i=0; i<limit; i++)
   printf("%d  ", ArrayTwo[i]); //Printing copied elements
}