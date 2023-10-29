//C Program to implement Quick Sort

#include<stdio.h>
void QuickSort(int arr[10], int first, int last){
   int i, j, pivot, temp;

   if(first < last){
      pivot = first;
      i = first;
      j = last;

      while(i < j){
         while(arr[i] <= arr[pivot] && i < last) i++;
         while(arr[j] > arr[pivot]) j--;
         if(i < j){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }

      temp = arr[pivot];
      arr[pivot] = arr[j];
      arr[j] = temp;

      QuickSort(arr, first, j - 1);
      QuickSort(arr, j+1, last);
   }
}

int main(){
   int i, limit, arr[10];

   printf("QUICK SORT\n");
   printf("Enter limit: ");
   scanf("%d", &limit);

   printf("Enter %d elements: ", limit);
   for(i = 0; i < limit; i++) scanf("%d", &arr[i]);

   QuickSort(arr, 0, limit-1);

   printf("Sorted list: ");
   for(i = 0; i < limit; i++) printf(" %d  ",arr[i]);

}