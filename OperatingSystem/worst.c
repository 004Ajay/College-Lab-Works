#include<stdio.h>
#define max 25

void main(){
int b[max], f[max], bf[max],ff[max], i, j, nb, nf, temp, highest=0;
printf("\nMemory Management Scheme - Worst Fit\n");
printf("\nEnter number of blocks: ");
scanf("%d",&nb);
printf("Enter size of blocks:\n");
for(i = 1; i <= nb; i++){
 printf("Block %d: ", i);
 scanf("%d",&b[i]);
}

printf("Enter number of Processes: ");
scanf("%d",&nf);
printf("Enter size of Processes:\n");
for(i=1;i<=nf;i++){
 printf("Process %d: ", i);
 scanf("%d", &f[i]);
}

for(i=1;i<=nf;i++){
	for(j=1;j<=nb;j++){
		if(bf[j]!=1){
			temp = b[j] - f[i];
			if(highest < temp){
				ff[i] = j;
				highest = temp;
			}
		}
	}
	bf[ff[i]] = 1;
	highest = 0;
}

printf("\nProcess No  \tProcess Size  \tBlocks");
for(i = 1; i <= nf; i++)
    printf("\n%d\t\t%d\t\t%d", i-1, f[i], b[ff[i]]);
printf("\n");
}
