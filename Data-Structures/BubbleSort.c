//C Program to implement Bubble Sort

#include <stdio.h>
int main(){
  int arr[10], limit, i, j, temp,  space, times=0;
  space = 64; //(4*10) - for array, (4*6) - for other variables, Total = 68
  times = 16;
  
  printf("BUBBLE SORT\n");
  printf("Enter limit: ");
  scanf("%d", &limit);
  times++;

  printf("Enter %d integers: ", limit);

  for (i = 0; i < limit; i++){
    scanf("%d", &arr[i]);
    times++;
    }
  for(i = 0; i < (limit - 1); i++){
    for (j = 0; j < (limit - i - 1); j++){
      if(arr[j] > arr[j+1]){ //if an element is greater than the next element, then sawp
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        times += 4;
      }
        times++;
    }
        times++;
  }

  printf("Sorted list: ");

  for(i = 0; i< limit; i++){
    printf("%d  ", arr[i]);
    times++;
    }

  times += 3; //for this times and next printfs
  printf("\nTime Complexity: %d", times);
  printf("\nSpace Complexity: %d", space);
  

}
	