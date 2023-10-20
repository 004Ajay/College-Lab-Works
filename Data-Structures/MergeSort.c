//C Program to implement Merge Sort

#include<stdio.h>
void Merge(int a[], int k, int m, int k1, int m1){
 int temp[50], i = k, j = k1, n = 0;
 
 while(i <= m && j <= m1){
  if(a[i] < a[j]) temp[n++] = a[i++];
  else temp[n++] = a[j++];
  }

  while(i <= m) temp[n++] = a[i++];
  while(j <= m1) temp[n++] = a[j++];

 for(i = k, j = 0; i <= m1; i++, j++) a[i] = temp[j];
}

void MergeSort(int a[], int i, int j){
 int mid;
 
 if(i < j){
  mid = (i + j) / 2;
  MergeSort(a, i, mid);
  MergeSort(a, mid + 1, j);
  Merge(a, i, mid, mid + 1, j);
  }
}
 
int main(){
 int a[30], limit, i;
 printf("MERGE SORT\n");
 printf("Enter limit: ");
 scanf("%d", &limit);
 
 printf("Enter elements: ");
 for(i = 0; i < limit; i++) scanf("%d", &a[i]);
 
 MergeSort(a, 0, limit - 1);
 
 printf("\nSorted array is :");
 for(i = 0; i < limit; i++) printf("%d ", a[i]);
 
 return 0;
}