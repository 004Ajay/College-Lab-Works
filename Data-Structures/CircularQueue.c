//C Program to do operations on CIRCULAR QUEUE

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define size 5

int array[size], front = -1, rear = -1; //Global variable declaration

bool isFull(){ //checks wheteher circular queue is full
if((front == rear + 1) || (front == 0 && rear == size - 1))
   return true;
else
   return false;   
}

bool isEmpty(){ //checks wheteher circular queue is empty
if(front == -1)
   return true;
else
   return false; 
}

void ENQUEUE(){
//The process add an item of data to a circular queue
int element;
if(isFull()){
   printf("Queue is full.\nProgram terminated!");
   exit(0);
}
else{
   printf("Enter element to be added: ");
   scanf("%d", &element); //Reading element
   if(front == -1) 
      front = 0;
   rear = (rear + 1) % size; //Incrementing rear
   array[rear] = element; //Adding element to circular queue
    }
}

void DEQUEUE(){
int element;
if (isEmpty()) {
   printf("Queue is Empty.\nProgram terminated!");
   exit(0);
  } else {
    element = array[front];
    if (front == rear) {// Q has only one element, so we reset the queue after dequeing it
      front = -1, rear = -1;
    } 
    else { 
      front = (front + 1) % size;
    }
    printf("\nPopped element:  %d", element);
  }
}

void DISPLAY(){
//To display circular queue elements
int i;
if(isEmpty()){
   printf("Queue is Empty.\nProgram terminated!");
   exit(0);
}
else{
printf("\nQueue element(s): ");   
for(i = front; i != rear; i = (i + 1) % size){
   printf("%d ", array[i]); //showing the circular queue elements
   }
   printf("%d ", array[i]);
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
printf("Exited!");  
}