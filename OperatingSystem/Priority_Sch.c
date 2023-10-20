#include<stdio.h>
 
int main(){
    int burstTime[20], procs[20], waitTime[20], tat[20], prio[20], i, j, num, total = 0, pos, temp;
    float avg_waitTime, avg_tat;
    printf("Enter Number of Process:");
    scanf("%d", &num);
 
    printf("\nEnter Burst Time and Priority\n");
    for(i=0;i<num;i++){
     printf("Burst Time:");
     scanf("%d",&burstTime[i]);
     printf("Priority:");
     scanf("%d",&prio[i]);
     procs[i]=i+1;          
    }
 
    for(i=0;i<num;i++){
    pos=i;
     for(j=i+1;j<num;j++){
        if(prio[j]<prio[pos])
         pos=j;}
 
     temp=prio[i];
     prio[i]=prio[pos];
     prio[pos]=temp;
 
     temp=burstTime[i];
     burstTime[i]=burstTime[pos];
     burstTime[pos]=temp;
 
     temp=procs[i];
     procs[i]=procs[pos];
     procs[pos]=temp;}
 
    waitTime[0]=0; 
 
   
    for(i=1;i<num;i++){
        waitTime[i]=0;
     for(j=0;j<i;j++)
        waitTime[i]+=burstTime[j];
     total += waitTime[i];}
 
    avg_waitTime = (float)total/num;
    total = 0;
 
    printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
    for(i=0;i<num;i++){
     tat[i]=burstTime[i]+waitTime[i];
     total+=tat[i];
     printf("\n%d\t\t%d\t\t%d\t\t%d", procs[i], burstTime[i], waitTime[i], tat[i]);}
    avg_tat=(float)total/num;
    printf("\nAverage Waiting Time = %.2f", avg_waitTime);
    printf("\nAverage Turnaround Time = %.2f\n", avg_tat);
 
    return 0;
    }