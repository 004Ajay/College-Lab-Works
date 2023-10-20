//C Program to do Reverse operation using STACK

#include<stdio.h>
#include<stdbool.h>
#define size 20

char array[size], top = -1; //Global variable declaration

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
    //puts(word[top]);
   printf("%c", array[top]); //popped element
   top = top - 1; //Decrementing top   
}
}

int main(){
int choice, i = 0; 
char word[10];
char option;
printf("Enter word: ");
scanf("%s", word);

for(i=0; word[i] != '\0'; i++){
    printf("Pushed %c to Stack\n", word[i]);
    push(word[i]);
}

printf("Reversed word: ");
while(top != -1) pop();
return 0;
}