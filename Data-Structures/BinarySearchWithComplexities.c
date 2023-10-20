//C Program to do Binary Search with Space & Time Complexity

#include<stdio.h>

int main(){
int array[50], limit, key, result, i, low, high, mid, space = 0, times = 0; //space = (10 * 4) for array and (9 * 4 = 36) for other declarations
char choice; //1 space
times += 10;
space = 77; //space = (10 * 4) + (9 * 4 = 36) + 1

do{
//getting array size
printf("Enter array limit: ");
scanf("%d", &limit);
times++;

//getting array elements
printf("Enter sorted array elements:\n");
for(i=0; i<limit; i++){
    printf("Element %d: ", i+1);
    scanf("%d", &array[i]);
    times += 2;
}
times = times + 1; //for false iteration of for loop


//getting search key
printf("Enter search key: ");
scanf("%d", &key);
times += 2;

low = 0, high = limit - 1, mid = (low + high) / 2;
times = times + 3; //for low and high, incremented the value of times to 3


while(low <= high){
times ++; //for while loop
   mid = (low + high) / 2;
   times++;

   if(array[mid] == key){
      printf("Element %d is found at position %d", key, (mid + 1));
      times += 2;
      break;
   }

   if(array[mid] < key){
    low = mid + 1;
    times += 2;
   }

   else{
    high = mid - 1;
    times++;
   }

   mid = (low + high) / 2;
   times++;
}

   if(low > high){
     printf("Element %d is not found on the list\n", key);
times += 2;  
}
times += 5;// for running or failing of do while loop
printf("\nTime complexity is  %d\n", times);
printf("Space complexity is  %d\n", space);
printf("\nEnter Your Choice \nFor SEARCHING Type s \nFor EXIT, press any letter\nChoice: ");
scanf(" %c", &choice);
}while(choice == 'S' || choice == 's');
}