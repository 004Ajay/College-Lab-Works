#include<stdio.h>
int main(){

int array[10] = {1, 5, 7, 3, 6, 9, 12, 17}; //manually giving input array
int i, sum = 0; //setting sum = 0

for(i=0; i<10; i++)
      sum += array[i]; //calculating sum
      
printf("Sum = %d", sum);
}