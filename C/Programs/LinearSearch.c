//C Program To Do Linear Search using function
#include<stdio.h>

//Declaring function for Linear Search
int LinearSearch(int arr[], int lim, int skey){
int i, j;

for(i=0; i<lim; i++){
   if(arr[i] == skey){ //If search element = array element, returns True
       printf("Element %d is found at position %d\n", skey, i+1);
       break;
   }
}
   if(skey > lim) //If search element is out of scope, return True
     printf("Element %d is not found on the list\n", skey);
}

int main(){ //Main Function starts here
int array[20], limit, key, result, choice, i;

//getting array size
printf("Enter array limit: ");
scanf("%d", &limit);

//getting array elements
printf("Enter array elements:\n");
for(i=0; i<limit; i++){
    printf("Element %d: ", i+1);
    scanf("%d", &array[i]);
}
do{ //Do While loop to restart SEARCHING with new search key, exists if user types any letter other than 'S or s'
//getting search key
printf("Enter search key: ");
scanf("%d", &key);

LinearSearch(array, limit, key); //calling function

printf("\nEnter Your Choice \nFor SEARCHING Type s \nFor EXIT, press any letter\n Choice: ");
scanf(" %lc", &choice);
}while(choice == 'S' || choice == 's');
}