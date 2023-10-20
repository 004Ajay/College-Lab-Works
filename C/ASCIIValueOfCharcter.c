// C Program to find ASCII values of a character

#include <stdio.h>
int main() {  
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);  
    
    printf("ASCII value of %c = %d", c, c);
    /*
    %d displays the integer value of entered character
    %c for actual character
    */
    return 0;
}
