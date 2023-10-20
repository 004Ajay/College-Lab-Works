//C program separate odd & even numbers from an array
#include<stdio.h>
int main(){
int array[10], even[10], odd[10];
int limit, i, j=0, k=0;

printf("Enter array limit: ");
scanf("%d", &limit); //getting array size

printf("Enter array elements:\n");
for(i=0; i<limit; i++){
    printf("Element %d: ", i+1);
    scanf("%d", &array[i]); //getting array elements
}

for(i=0; i<limit; i++){
    if(array[i] % 2 == 0){
    even[j] = array[i];
    j++;
    }
    else{
    odd[k] = array[i];
    k++;
    }
}
printf("Even Elements: ");
for(i=0; i<j; i++)
    printf("%d  ", even[i]);

printf("\nOdd Elements: ");
for(i=0; i<k; i++)
    printf("%d  ", odd[i]);
}