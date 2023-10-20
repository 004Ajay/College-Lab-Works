//C Program to implement Insertion Sort

#include <stdio.h>
int main(){
  int array[10], limit, i, j, temp, flag = 0;

  printf("INSERTION SORT\n");
  printf("Enter limit: ");
  scanf("%d", &limit);

  printf("Enter %d integers: ", limit);

  for(i = 0; i < limit; i++) scanf("%d", &array[i]);

  for(i = 1; i <= (limit - 1); i++) {
    temp = array[i];
    for(j = i - 1; j >= 0; j--) {
      if (array[j] > temp) {
        array[j+1] = array[j];
        flag = 1;
      }
      else break;
    }
    if(flag) array[j+1] = temp;
  }

  printf("Sorted list: ");

  for (i = 0; i <= (limit - 1); i++) printf("%d  ", array[i]);

  return 0;
}