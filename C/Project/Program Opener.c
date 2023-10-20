#include<stdio.h>
#include<stdlib.h>
//bugged 24-01-2022
int main(){
printf("\n\n");
printf("PRESS\n1- OPEN GOOGLE CHROME\n2- OPEN YOUTUBE\n3- OPEN GOOGLE MEET\n4- OPEN C PROGRAMMING\n5- OPEN GRAPHICS CLASS\n6- OPEN CIVIL CLASS\n7- OPEN WHATSAPP WEB\n8- AI LMS MOODLE\n9- DATA STRUCTURE\n11- JAVA\n22- MATHS\n\nEnter choice: ");

    int choice;
    scanf("%d", &choice);

    switch(choice)
    {
        case 1  : system ("start chrome");
            printf("\nCHATBOT: OPENING GOOGLE CHROME\n");
                break;

        case 2  : system ("start www.youtube.com");
         printf("\nCHATBOT: OPENING YOUTUBE\n");
                    break;

        case 3  : system (" start https://meet.google.com/?hs=197&pli=1&authuser=0");
            printf("\nCHATBOT: OPENING GOOGLE MEET\n");
                    break;

        case 6 : system (" start https://meet.google.com/uug-wzre-hnu ");
                printf("\nCHATBOT : OPENING CHEMISTRY CLASS\n");
                 break;


        case 7 : system (" start WhatsApp");
                printf("\nCHATBOT : OPENING WHATSAPP\n");
                 break;

        case 8 : system (" start https://ailms.sjcetpalai.ac.in/course/view.php?id=18/");
                printf("\nCHATBOT : OPENING AI LMS MOODLE\n");
                 break;
        case 9 : system (" start https://meet.google.com/pzi-bshn-qrm/");
                printf("\nCHATBOT : OPENING DATA STRUCTURE\n");
                 break;
        case 11: system (" start https://meet.google.com/pzi-bshn-qrm/"); //case set to 22 for ease of typing for the user
                printf("\nCHATBOT : OPENING JAVA\n");
                 break;         
        case 22: system (" start https://meet.google.com/ugp-amra-zet"); //case set to 22 for ease of typing for the user
                printf("\nCHATBOT : OPENING MATHS\n");
                 break;

      default:printf("\nCHATBOT: No classes in the entry\n");
    }
    return 0;

}