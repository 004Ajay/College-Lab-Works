#include <stdio.h>

int waitingTime(int procs[], int arSize, int burstTime[], int waitTime[]){
   waitTime[0] = 0;
   for (int i = 1; i < arSize; i++ )
   waitTime[i] = burstTime[i-1] + waitTime[i-1] ;
   return 0;
}

int turnAroundTime( int procs[], int arSize, int burstTime[], int waitTime[], int tat[]){
   for (int i = 0; i < arSize; i++)
   tat[i] = burstTime[i] + waitTime[i];
   return 0;
}

int avgtime( int procs[], int arSize, int burstTime[]){
   int i, waitTime[arSize], tat[arSize], total_wt = 0, total_tat = 0;
   waitingTime(procs, arSize, burstTime, waitTime);
   turnAroundTime(procs, arSize, burstTime, waitTime, tat);
   printf("Processes\tBurst Time\tWaiting Time\tTurn Around Time\n");
   for ( i = 0; i < arSize; i++) {
      total_wt = total_wt + waitTime[i];
      total_tat = total_tat + tat[i];
      printf("%d\t\t%d\t\t%d\t\t%d\n", i+1, burstTime[i], waitTime[i], tat[i]);
   }
   printf("Average Waiting Time = %.2f\n", (float)total_wt / (float)arSize);
   printf("Average Turn Around Time = %.2f\n", (float)total_tat / (float)arSize);
   return 0;
}
// main function
int main() {
   int i, prcsNum;
   printf("Enter num of processes: ");
   scanf("%d", &prcsNum);
   int procs[prcsNum], burstTime[prcsNum];
   int arSize = sizeof procs / sizeof procs[0];
   for(i = 0; i < prcsNum; i++){
   printf("Enter process number: ");
   scanf("%d", &procs[i]);
   printf("Enter burst time of process %d: ", i+1);
   scanf("%d", &burstTime[i]);
   }
   avgtime(procs, arSize, burstTime);
   return 0;
}