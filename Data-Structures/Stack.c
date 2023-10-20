//C Program to do operations on STACK

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define size 5

int array[size], top = -1; //Global variable declaration

bool isFull(){ //checks wheteher stack is full
if(top == (size - 1))
   return true;
else
   return false;   
}

bool isEmpty(){ //checks wheteher stack is empty
if(top == -1)
   return true; //if top is at it's initial value, the fn. returns true
else
   return false; 
}

void push(){
//The process of putting a new element on the stack is know as push operation
int element;
if(isFull()){
   printf("Stack is full.\nProgram terminated!");
   exit(0); //exits the program, if stack is full
}
else{
   top = top + 1; //Incrementing top
   printf("Enter element to be Pushed: ");
   scanf("%d", &element); //Reading element
   array[top] = element; //Adding element to the top of stack   
    }
}

void pop(){
//The process of taking out an element from the stack is know as pop operation
if(isEmpty()){
   printf("Stack is Empty.\nProgram terminated!");
   exit(0); //exits the program, if stack is empty
}
else{
   printf("\nPopped element:  %d", array[top]); //showing the popped element
   top = top - 1; //Decrementing top   
}
}

void display(){
//To display stack elements
if(isEmpty()){
   printf("Stack is Empty.\nProgram terminated!");
   exit(0); //exits the program, if stack is empty
}
else{
printf("\nStack element(s):");
for(int i = 0; i <= top; ++i) //if top == 0, we need to print that element. So, we put i <= top
   printf("  %d", array[i]); //showing the stack elements
    }
}

int main(){
int choice;
char option;

do{ //repeating the iteration until user enter a character other than 'Y' or 'y'
printf("Choose any option\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\nChoice: ");
scanf("%d", &choice);

switch(choice){

case 1: push(); //calling push function
        break;
case 2: pop(); //calling pop function
        break;
case 3: display(); //calling display function
        break;
case 4: printf("Exited!\n");
        exit(0); //exits the program
default: printf("Wrong input!\n");
             }
printf("\nDo you want to continue? y / n\n");
scanf(" %c", &option);             
  }while(option == 'Y' || option == 'y');
}