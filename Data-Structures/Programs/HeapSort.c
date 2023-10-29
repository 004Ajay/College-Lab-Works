//C Program to implement Heap Sort

#include <stdio.h>  
void heapify(int a[], int n, int i){  
    int largest = i; 
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && a[left] > a[largest])  
        largest = left;  
   
    if (right < n && a[right] > a[largest])  
        largest = right;  

    if (largest != i) {  
  
        int temp = a[i];  
        a[i] = a[largest];  
        a[largest] = temp;  
          
        heapify(a, n, largest);  
    }  
}  


void heapSort(int a[], int n){  
    for (int i = n / 2 - 1; i >= 0; i--)  
        heapify(a, n, i);  

    for (int i = n - 1; i >= 0; i--) {  
      
        int temp = a[0];  
        a[0] = a[i];  
        a[i] = temp;  
          
        heapify(a, i, 0);  
    }  
}  
  
int main() {
    int arr[30], limit, i;

    printf("HEAP SORT\n");
    printf("Enter limit: ");
    scanf("%d", &limit);
 
    printf("Enter elements: ");
    for(i = 0; i < limit; i++) scanf("%d", &arr[i]);
 
    heapSort(arr, limit);

    printf("\nSorted array is :");
    for(i = 0; i < limit; i++) printf("%d ", arr[i]);  
  }