#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<sys/types.h>
#define SEGSIZE 100

int main(int argc, char *argv[]){
int shmid,cntr; 
key_t key;
char *segptr;
char buff[] = "HelloWorld";
key = ftok(".", 's');

if((shmid = shmget(key,SEGSIZE,IPC_CREAT|IPC_EXCL|0666)) == -1){
    if((shmid = shmget(key,SEGSIZE,0)) == -1){
        perror("shmget");
        exit(1);
 }
}
else
 printf("Creating a new shared memory segment\nSHMID:%d\n",shmid);

system("ipcs -m");
if((segptr = (char*)shmat(shmid,0,0)) == (char*)-1){
 perror("shmat");
 exit(1);
}

printf("Writing data to shared memory...\n");
strcpy(segptr,buff);
printf("DONE\n");

printf("Reading data from shared memory...\n");
printf("DATA: %s\n",segptr);
printf("DONE\n");

printf("Removing shared memory segment...\n");
if(shmctl(shmid,IPC_RMID,0) == -1)
    printf("Cannot remove shared memory segment...\n");
else
    printf("Removed successfully");
} 