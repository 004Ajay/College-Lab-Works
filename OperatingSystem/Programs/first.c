#include <stdio.h>

int main(){
int b[10], p[10], flags[10], all[10], bno, pno, i, j;
printf("\nMemory Management Scheme - First Fit\n");
for (i = 0; i < 10; i++){
  flags[i] = 0;
  all[i] = -1;
  }

printf("Enter number of blocks: ");
scanf("%d", &bno);
printf("\nEnter size of blocks:\n ");
for (i = 0; i < bno; i++){
  printf("Block no.%d: ", i);
  scanf("%d", &b[i]);
  }

printf("\nEnter no. of processes: ");
scanf("%d", &pno);
printf("\nEnter size of processes:\n ");
for (i = 0; i < pno; i++){
  printf("Process no.%d: ", i);
  scanf("%d", &p[i]);
  }

for (i = 0; i < pno; i++){
     for (j = 0; j < bno; j++){
      if (flags[j] == 0 && b[j] >= p[i]){
        all[j] = i;
        flags[j] = 1;
        break;
      }
    }
}  

printf("\nBlock No.\tBlocks\t\tProcess no.\t\tProcess Size");
for (i = 0; i < bno; i++){
  printf("\n%d\t\t%d\t\t",i + 1, b[i]);
 if (flags[i] == 1)
  printf("%d\t\t\t%d", all[i]+ 1, p[all[i]]);
else
  printf("Not allocated");
  }
printf("\n");
}