//C Program to implement Selection Sort

#include <stdio.h>
int main(){
  int arr[10], limit, i, j, pos, temp, times=0, space;
  space = 68; //(4*10) - for array, (4*7) - for other variables, Total = 68 
  times = 17;

  printf("SELECTION SORT\n");
  printf("Enter limit: ");
  scanf("%d", &limit);
  times++;

  printf("Enter %d integers: ", limit);

  for (i = 0; i < limit; i++){
    scanf("%d", &arr[i]);
    times++;
    }

  for (i = 0; i < (limit - 1); i++){
    pos = i;
    times++;
    for (j = i + 1; j < limit; j++){
      if(arr[pos]>arr[j]){
        pos = j;
        times += 2;
        }
     times++;
     }

    if(pos != i){

      temp = arr[i];
      arr[i] = arr[pos];
      arr[pos] = temp;
      times += 3;
    }

     times++;
  }

  printf("Sorted list: ");

  for(i = 0; i < limit; i++){
    printf("%d  ",arr[i]);
    times++;
    }
  
  times += 3; //for this times and next printfs
  printf("\nTime Complexity: %d\n", times);
  printf("Space Complexity: %d\n", space);
}