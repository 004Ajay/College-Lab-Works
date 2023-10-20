//C Program to do Binary Search using function

#include<stdio.h>

 //global variables

//function to search
int BinarySearch(int arr[], int lower, int higher, int skey){

while(lower <= higher){
   int mid = (lower + higher) / 2;

   if(arr[mid] == skey){
      return mid;
      break;
   }

   if(arr[mid] < skey){
    lower = mid + 1;
   }

   else{
    higher = mid - 1;
   }

   mid = (lower + higher) / 2;
}

   if(lower > higher) return -1;
}

//main function
int main(){
int array[10], limit, key, i, low, high, mid;
char choice;

do{
//getting array size
printf("Enter array limit(max 10): ");
scanf("%d", &limit);

//getting array elements
printf("Enter sorted array elements:\n");
for(i=0; i<limit; i++){
    printf("Element %d: ", i+1);
    scanf("%d", &array[i]);
}

//getting search key
printf("Enter search key: ");
scanf("%d", &key);

if(BinarySearch(array[10], low, high, key)) printf("Element %d is found at position %d\n", mid);
else
printf("Element is not found on the list\n");

printf("\nEnter Your Choice \nFor SEARCHING Type s \nFor EXIT, press any letter\nChoice: ");
scanf(" %c", &choice);
}while(choice == 'S' || choice == 's');
}

//pushed only the sample, the program is not complete or correct