#include<stdio.h>

int main(){
int burstTime[20], prcs[20], waitTime[20], tat[20], i, j, num, total = 0, pos, temp;
float avg_waitTime, avg_tat;

printf("Enter number of process:");
scanf("%d",&num);
 
printf("\nEnter Burst Times\n");
for(i = 0; i < num; i++){
printf("Process %d:", i+1);
scanf("%d", &burstTime[i]);
prcs[i] = i+1;        
    }
for(i = 0; i < num; i++){
   pos=i;
   for(j=i+1;j<num;j++){
       if(burstTime[j]<burstTime[pos])
          pos=j;
        }
 
temp=burstTime[i];
burstTime[i]=burstTime[pos];
burstTime[pos]=temp;
 
temp=prcs[i];
prcs[i]=prcs[pos];
prcs[pos]=temp;
    }
   
waitTime[0]=0;            
   
for(i=1;i<num;i++){
    waitTime[i]=0;
    for(j=0;j<i;j++)
        waitTime[i]+=burstTime[j];
        total+=waitTime[i];
    }
    avg_waitTime=(float)total/num;      
    total=0;
 
    printf("\nProcess\t\tBurst Time\tWaiting Time\tTurn Around Time");
    for(i=0;i<num;i++){
        tat[i]=burstTime[i]+waitTime[i];  
        total+=tat[i];
        printf("\np%d\t\t%d\t\t%d\t\t%d", prcs[i], burstTime[i], waitTime[i], tat[i]);
    }
avg_tat= (float)total/num;
printf("\nAverage Waiting Time: %.2f", avg_waitTime);
printf("\nAverage Turn Around Time: %.2f\n", avg_tat);
}