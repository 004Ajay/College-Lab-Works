/*
Sample inputs for 'Least Recently Used (LRU)'
Number of pages: 20
Number of frames: 3
Ref string: 7 0 1 2 0 3 0 4 2 3 0 3 2 1 2 0 1 7 0 1
*/

#include<stdio.h>

int main(){
int i, m, n, pos, k, l, frms[10], tot_frms, pgs[50], tot_pgs, a = 0, b = 0, count = 0;
printf("\nEnter number of Pages: ");
scanf("%d", &tot_pgs);
printf("\nEnter number of Frames: ");
scanf("%d", &tot_frms);
int temp[tot_frms];
for(i = 0; i < tot_frms; i++)
    frms[i] = -1;
printf("\nEnter Ref String: ");
for(n = 1; n <= tot_pgs; n++)
    scanf("%d", &pgs[n]);
printf("Ref string\tframes\n");
for(n = 1; n <= tot_pgs; n++){
printf("%d\t\t", pgs[n]);
a = 0, b = 0;
for(m = 0; m < tot_frms; m++){
    if(frms[m] == pgs[n]){
            a = 1;
            b = 1;
            break;
    }
}
if(a == 0){
    for(m = 0; m < tot_frms; m++){
        if(frms[m] == -1){
            frms[m] = pgs[n];
            b = 1;
            count++;
            break;
        }
    }
}
if(b == 0){
    for(m = 0; m < tot_frms; m++){
        temp[m] = 0;
    }
    for(k = n - 1, l = 1; l <= tot_frms - 1; l++, k--){
        for(m = 0; m < tot_frms; m++){
            if(frms[m] == pgs[k]){
                temp[m] = 1;
            }
        }
    }
    for(m = 0; m < tot_frms; m++){
        if(temp[m] == 0)
            pos = m;
    }
    frms[pos] = pgs[n];
    count++;
}
for(m = 0; m < tot_frms; m++){
    printf("%d\t", frms[m]);
}
printf("\n");
}
printf("Total Page Faults: %d\n", count);
return 0;
}
