//C Program to do Reverse operation using STACK

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define size 20

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

void push(int input){
//The process of putting a new element on the stack is know as push operation
int element;
if(isFull()){
   printf("Stack is full.\nProgram terminated!");
   exit(0); //exits the program, if stack is full
}
else{
   top = top + 1; //Incrementing top
   array[top] = input; //Adding element to the top of stack
    }   
}

void pop(){
//The process of taking out an element from the stack is know as pop operation
if(isEmpty()){
   printf("Stack is Empty.\nProgram terminated!");
   exit(0); //exits the program, if stack is empty
}
else{
   printf("%d", array[top]); //popped element
   top = top - 1; //Decrementing top   
}
}

void display(){
//To display stack elements
if(isEmpty()){
   printf("\nStack is Empty.\nProgram terminated!");
   exit(0); //exits the program, if stack is empty
}
else{
printf("\n\nStack element(s):");
for(int i = 0; i <= top; ++i) //if top == 0, we need to print that element. So, we put i <= top
   printf("  %d", array[i]); //showing the stack elements
    }
}

int main(){
int choice, i, limit, input[10];
char option;
printf("Reversing using STACK in C Program\n\n");
printf("Enter limit: ");
scanf("%d", &limit);

printf("Enter elements: ");
for(i=0; i<limit; i++)
    scanf("%d", &input[i]);

for(i=0; i<limit; i++){
    printf("Pushed %d to Stack\n", input[i]);
    push(input[i]);
}

printf("Reversed Elements: ");
while(top != -1){
      pop(); 
      printf("  ");
}
return 0;
}