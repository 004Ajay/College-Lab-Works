//C Program to get day from week numbering

#include <stdio.h>
int main(){
int num;
printf("Enter week number: ");
scanf("%d", &num);
switch (num)
{
	case 1: printf(" The day is SUNDAY");
			break;
	case 2: printf(" The day is MONDAY");
			break;
    case 3: printf(" The day is TUESDAY");
			break;
    case 4: printf(" The day is WEDNESAY");
			break;
    case 5: printf(" The day is THURSDAY");
			break;
    case 6: printf(" The day is FRIDAY");
			break;
    case 7: printf(" The day is SATURDAY");
			break;                                       
	default: printf("Sorry, Wrong Input.");
			break;
}
return 0;
}