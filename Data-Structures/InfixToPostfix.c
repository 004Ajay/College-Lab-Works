/*

C Program to convert Infix expression to Postfix expression

Infix Expression: expression of <operand><operator><operand>, Ex: A+B
Postfix Expression: expression of <operand><operand><operator>, Ex: AB+

*/

#include<stdio.h> //for basic i/o functions
#include<stdlib.h> //for exit(0);
#include<stdbool.h> //for boolean functions
#include<string.h> //for string functions
#include<ctype.h> //for checking whether arguments are numbers, alphabets etc...
#define size 30

char stack[size], InfixExpression[30], PostfixExpression[30], top = -1; //Global variable declaration

//The process of putting a new element on the stack is know as push operation
void push(char item){
int element;
if(top >= (size - 1)){
   printf("Stack is full.\nProgram terminated!");
   exit(0); //exits the program, if stack is full
}
else{
	top = top+1;
	stack[top] = item; //Adding ')' & 'item' from pop() to top of stack
	}
}

//The process of taking out an element from the stack is know as pop operation
char pop(){
char item;
if(top == -1){
   printf("Stack is Empty.\nProgram terminated!");
   exit(0); //exits the program, if stack is empty
}
else{
   item = stack[top];//taking out the top element
   top = top - 1; //Decrementing top
   return item; //retruning item to push() to add it to stack
}
}

//Function to check whether a scanned symbol is operator
int CheckOperator(char symbol){
	if(symbol == '^' || symbol == '*' || symbol == '/' || symbol == '+' || symbol =='-')
	   return 1;
	else
	   return 0;
}

//Function to assign precedence to operators
int AssignPrecedence(char symbol){
   if(symbol == '^') //exponent operator has highest precedence
	   return(3);
	else if(symbol == '*' || symbol == '/')
		return(2);
	else if(symbol == '+' || symbol == '-') //These have lowest precedence
		return(1);
	else
		return(0);
}

//Function to convert Infix Expression to Postfix Expression
void InfixToPostfix(char InfixExpression[size], char PostfixExpression[size]){
int i = 0, j = 0;
char item, operator;

push('('); //Pushing '(' onto stack

strcat(InfixExpression, ")"); //Adding ')' to end of Infix expression

item = InfixExpression[i]; //initializing before loop

while(item != '\0'){ //run loop till end of infix expression
	if(item == '(')
		push(item);
	else if( isdigit(item) || isalpha(item)){
      /*
      The functions isdigit() & isalpha() are used from header file <ctype.h>
      isdigit() - This function checks whether the passed character is decimal digit.
      isalpha() - This function checks whether the passed character is alphabetic
      */
		PostfixExpression[j] = item; //Adds operand symbol to postfix expression
		j++; //Incrementing 'j'
		}
	else if(CheckOperator(item) == 1){ //isoperator() - This function checks whether the passed symbol is an operator or not
	      operator = pop(); 

	while(CheckOperator(operator) == 1 && AssignPrecedence(operator) >= AssignPrecedence(item)){
			PostfixExpression[j] = operator; //pop all higher precendence operator
			j++;
			operator = pop(); // Adding them to postfix expresion
		}
		push(operator);
		/*
      Above while loop will terminate we have oppped one extra item
		for which condition fails and loop terminates, so to push that one we use push(operator)
      */

		push(item); //Pushing current oprerator symbol onto stack
		}

		else if(item == ')'){ //if current symbol is ')' then pop and keep popping until '(' encounterd
		operator = pop();
		while(operator != '('){     
				PostfixExpression[j] = operator;
				j++;
				operator = pop();
			}
		}
		else{ //if current symbol is neither operand not '(' nor ')' and nor operator the it is illegal symbol
			printf("\nInvalid infix Expression.\n");
			getchar();
			exit(1);
		}

		i++;
		item = InfixExpression[i]; //go to next symbol of infix expression
	} //while loop ends here
	if(top > 0){ //if it is true, then it is illegeal  symbol
		printf("\nInvalid infix Expression.\n");
		getchar();
		exit(1);
   }

	PostfixExpression[j] = '\0'; //setting end

}

//main function
int main(){

printf("\nEnter Infix expression : ");
gets(InfixExpression); //Reads the expression

InfixToPostfix(InfixExpression, PostfixExpression); //Calling InfixToPostfix function for conversion

printf("Postfix Expression: ");
puts(PostfixExpression); //Writes the expression

return 0;
}