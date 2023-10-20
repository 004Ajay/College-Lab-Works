//C Program to do operations on QUEUE

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define size 5

int array[size], front = 0, rear = -1; //Global variable declaration

bool isFull(){ //checks wheteher Queue is full
if(rear == (size - 1))
   return true;
else
   return false;   
}

bool isEmpty(){ //checks wheteher Queue is empty
if(rear < front)
   return true; //if top is at it's initial value, the fn. returns true
else
   return false; 
}

void ENQUEUE(){
//The process add an item of data to a queue
int element;
if(isFull()){
   printf("Queue is full.\nProgram terminated!");
   exit(0);
}
else{
   rear += 1; //Incrementing rear
   printf("Enter element to be added: ");
   scanf("%d", &element); //Reading element
   array[rear] = element; //Adding element to the top of Queue  
    }
}

void DEQUEUE(){
//The process of taking out an element from the front is know as DEQUEUE operation
if(isEmpty()){
   printf("Queue is Empty.\nProgram terminated!");
   exit(0);
}
else{
   printf("\nPopped element:  %d", array[front]); //showing the popped element
   front += 1; //Incrementing top   
    }
}

void DISPLAY(){
//To display Queue elements
if(isEmpty()){
   printf("Queue is Empty.\nProgram terminated!");
   exit(0);
}
else{
for(int i = front; i <= rear; ++i) //if top == 0, we need to print that element. So, we put i <= top
   printf("\nQueue element(s):  %d", array[i]); //showing the Queue elements
    }
}

int main(){
int choice;
char option;

do{ //repeating the iteration until user enter a character other than 'Y' or 'y'
printf("Choose any option\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\nChoice: ");
scanf("%d", &choice);

switch(choice){

case 1: ENQUEUE(); //Calling ENQUEUE function
        break;
case 2: DEQUEUE(); //Calling DEQUEUE function
        break;
case 3: DISPLAY(); //Calling DISPLAY function
        break;
case 4: printf("Exited!\n"); //Exits the program
        exit(0);

default: printf("Wrong input!\n");
             }
printf("\nDo you want to continue? y / n\n");
scanf(" %c", &option);             
  }while(option == 'Y' || option == 'y');
}