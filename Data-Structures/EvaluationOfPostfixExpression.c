//C program to Evaluate postfix expression
//DS used- STACK

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define size 100

int array[size], top = -1; //Global variable declaration

int isFull(){ //checks wheteher stack is full
if(top == (size - 1)) return 1;
return 0;   
}

int isEmpty(){ //checks wheteher stack is empty
if(top == -1) return 1; //if top is at it's initial value, the fn. returns true
return 0; 
}

void push(int number){
//The process of putting a new element on the stack is know as push operation
if(isFull()){
   printf("Stack is full.\nProgram terminated!");
   exit(0); //exits the program, if stack is full
}
else{
   top++; //Incrementing top
   array[top] = number; //Adding element to the top of stack     
    }
}

int pop(){
//The process of taking out an element from the stack is know as pop operation
if(isEmpty()){
   printf("Stack is Empty.\nProgram terminated!");
   exit(0); //exits the program, if stack is empty
}
else{
     int popped = array[top];
     top--; //Decrementing top 
     return popped;
}
}

//Function to evaluate postfix expression
void EvaPstExp(char PstExp[size]){
    int i, num1, num2, result, number;

for(i=0; PstExp[i] != '\0'; i++){

switch(PstExp[i]){
      case'+':num1 = pop();
              num2 = pop();
              push(num1 + num2); //Adding the popped elements
              break;

      case'-':num1 = pop();
              num2 = pop();
              push(num1 - num2); //Subtracting the popped elements
              break;

      case'*':num1 = pop();
              num2 = pop();
              push(num1 * num2); //Multiplying the popped elements
              break;

      case'/':num1 = pop();
              num2 = pop();
              push(num1 / num2); //Dividing the popped elements
              break;

      case'^':num1 = pop();
              num2 = pop();
              push(num1 ^ num2); //Powering the popped elements
              break;        

      default:
              printf("Enter the value of %c: ", PstExp[i]);
              scanf("%d", &number);
              push(number);
              break;
             }
}
printf("\nResult: %d\n", array[top]);
}

//Main Fuction
int main(){
int choice;  
char PstExp[size], option;

do{ //Iterates until user enter a character other than 'Y' or 'y'
printf("Press\n1.Evaluation of Postfix Expression\n2.EXIT\nChoice: ");
scanf("%d", &choice);

switch(choice){
  case 1: printf("Enter the postfix expression: ");
          scanf("%s", PstExp);

          EvaPstExp(PstExp); //Printing the Evaluated Postfix Expression
          break;

  case 2: printf("Exited!"); 
           exit(0); 
}
printf("\nDo you want to continue? y / n\n");
scanf(" %c", &option);             
  }while(option == 'Y' || option == 'y');
  printf("Exited!");
  exit(0);
}