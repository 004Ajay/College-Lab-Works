//C program copy elements of an array to another array
#include<stdio.h>
int main(){
int array[10];
int limit, i, j, temp = 0;

printf("Enter array limit: ");
scanf("%d", &limit); //getting array size

printf("Enter array elements:\n");
for(i=0; i<limit; i++){
    printf("Element %d: ", i+1);
    scanf("%d", &array[i]); //getting array elements
}
//Logic for sorting using Bubble Sort
for (i = 0; i < limit; ++i){
    for (j = i + 1; j < limit; ++j){
        if (array[i] > array[j]){ //Sorting array elements
        temp =  array[i];
        array[i] = array[j];
        array[j] = temp;
        }
    }
}
printf("\nSorted Array Elements: ");
for(i=0; i<limit; i++)
   printf("%d  ", array[i]); //Printing sorted array elements

printf("\nSmallest Element: %d", array[0]); //Printing smallest array element
printf("\nBiggest Element: %d", array[limit - 1]); //Printing biggest array element
}