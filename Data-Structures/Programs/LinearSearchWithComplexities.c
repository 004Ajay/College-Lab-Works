//C Program To Do Linear Search with space & time complexity

#include<stdio.h>

int main(){ //Main Function starts here
int array[10], limit, key, result, i, j, space = 0, times = 0; //space = (10 * 4 = 40) for array, & (7 * 4 = 28) for other declarations;
char choice;//1 space
times += 10;
space = 69; //space = [(10 * 4) + (7 * 4) + 1] = 69

do{ //do while loop to restart SEARCHING

//getting array size
printf("Enter array limit: ");
scanf("%d", &limit);
times += 2;

//getting array elements
printf("Enter array elements:\n");
for(i=0; i<limit; i++){
    printf("Element %d: ", i+1);
    scanf("%d", &array[i]);
    times += 3;
}
times += 2; //for printf in line19 & 1 false iteration of for loop

//getting search key
printf("Enter search key: ");
scanf("%d", &key);
times += 2;

for(i=0; i<limit; i++){

   if(array[i] == key){ //If search element = array element, returns True
       printf("Element %d is found at position %d\n", key, i+1);
       break;
   }
   times += 3; //for loop running time    
}
times ++; //1 false iteration of for loop

   if(i == limit)
     printf("Element %d is not found on the list\n", key);
   times += 2; //for if & printf

printf("\nEnter Your Choice \nFor SEARCHING Type s \nFor EXIT, press any key\nChoice: ");
scanf(" %c", &choice);
times += 3; // for running or failing of do while loop
}while(choice == 'S' || choice == 's');

times += 2; //for next printfs
printf("Exited!\nTime complexity is  %d\n", times);
printf("Space complexity is  %d\n", space);
}
