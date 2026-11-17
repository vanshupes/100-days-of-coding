/*Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h>
int main()
{
float a,b,c,d,root1,root2,real,imag;
printf("Enter a: ");
scanf("%f",&a);
printf("Enter b: ");
scanf("%f",&b);
printf("Enter c: ");
scanf("%f",&c);
d=(b*b)-(4*a*c);
if(d>0)
{
root1=(-b+sqrt(d))/(2*a);
root2=(-b-sqrt(d))/(2*a);
printf("Roots are real and distinct \n");
printf("Root1= %.2f\n",root1);
printf("Root2= %.2f",root2);
}
else if(d==0)
{
root1=-b/(2*a);
printf("Roots are real and equal\n");
printf("Root1=Root2=%.2f",root1);
}
else
{
real=-b/(2*a);
imag=sqrt(-d)/(2*a);
printf("Roots are complex\n");
printf("Root1=%.2f+%.2fi\n",real,imag);
printf("Root2=%.2f-%.2fi",real,imag);
}
return 0;
}