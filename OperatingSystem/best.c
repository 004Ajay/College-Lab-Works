#include <stdio.h>

int main(){
int blk[20], fl[20], block_no, fl_no, i, j, temp, barr[20], blk_no[20], lowest = 9999;
printf("\nMemory Management Scheme - Best Fit");
printf("\nEnter number of blocks: ");
scanf("%d", &block_no);

printf("Enter size of blocks\n");
for(i = 1; i <= block_no; i++){
     printf("Block no.%d: ", i);
     scanf("%d", &blk[i]);
}

printf("\nEnter number of files: ");
scanf("%d", &fl_no);
printf("Enter size of files\n");
for (i = 1; i <= fl_no; i++){
printf("File no.%d: ", i);
scanf("%d", &fl[i]);
}

for(i = 1; i <= fl_no; i++){
    for(j = 1; j <= block_no; j++){
        if(barr[j] != 1){
          temp = blk[j] - fl[i];
if (temp >= 0)
    if (lowest > temp){
     blk_no[i] = j;
     lowest = temp;
     }
  }
}
barr[blk_no[i]] = 1;
lowest = 10000;
}

printf("\nFile_no\t\tFile_size\tBlock_no\tBlock_size");
for (i = 1; i <= fl_no && blk_no[i] != 0; i++){
     printf("\n%d\t\t%d\t\t%d\t\t%d", i, fl[i], blk_no[i], blk[blk_no[i]]);
}
printf("\n");
}