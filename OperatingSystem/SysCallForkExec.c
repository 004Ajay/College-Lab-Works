//Program to implement fork(),exec(), getpid(), exit()

#include <stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdlib.h>

int main(){

int pid;

printf("getpid()\n The process id of current process: %d\n",getpid());
printf("fork() creates child process\n");

if(fork() != 0){
printf("Parent process starts and wait() executes\n");
wait(NULL);

printf("waiting and executes another funtion\n");

char *args[]={"Is",NULL};

execvp(args[0],args);
exit(0);

printf("executes not ends and parent ends");
}

else{
printf("Child process starts and ends\n");
}

printf("exit function\n");
exit(0);

printf("exit not executing");
}