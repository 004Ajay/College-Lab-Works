//C Program to obtain reverse of a word using User Defined Function

#include <stdio.h>
#include <string.h>
/*
Here we included the header-file string.h and used a function 
named strlen, which is a library function that 
calculate the length of it's argument.
*/

//Defing function for Reversing the word
void reverse_word(){ //'void' means, we're not returing any value to the place where we call the function.
    char word[50];
    gets(word); //getting the word
    printf("Reversed Word: ");
    for(int i = strlen(word)-1; i >= 0; i--){ //Loop to print the word in reverse
        printf("%c", word[i]); //Printing the reverse characters one by one
        }
 }    

//Main Function, No matter how much User Defined Functions you add to your program, main function will execute FIRST
int main(){
    printf("Enter the word: ");
    reverse_word(); //Calling Reverse function
    return 0;
}