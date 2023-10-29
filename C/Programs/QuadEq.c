//C program to calculate the roots of a quadratice equation

#include <stdio.h>
#include <math.h>
int main (){
  int a, b, c;
    float det, x, y;
printf ("Quadratic Equations have only 2 roots.");
       printf ("\n");
       printf ("\n");
printf ("Enter the coefficient of x^2: ");
       scanf ("%d", &a);
printf ("Enter the coefficient of x: ");
       scanf ("%d", &b);
printf ("Enter the constant term: ");
       scanf ("%d", &c);
             det = (((b * b) - (4 * a * c))); //getting ((b^2)-4ac) to variable 'det'
if (det < 0){
int crp1; //crp stands for 'complex part'
  float crp2;
             crp1 = (-b/2*a);
             crp2 = ((sqrt (-((b*b) - 4 * a * c))) / 2 * a);
printf ("1st complex root, x1: '%d+i%.2f'\n" "2nd root, x2: '%d-i%.2f'",crp1, crp2, crp1, crp2);
       printf ("\n");
    }
else{
             x = (-b + sqrt (det)) / (2 * a);
             y = (-b - sqrt (det)) / (2 * a);
printf ("1st root, x1: '%.2f'\n" "2nd root, x2: '%.2f'", x, y);
    }
return 0;
}