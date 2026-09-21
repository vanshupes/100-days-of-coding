#include <stdio.h>
int main() {
int a,b,c;
printf("Enter three sides: ");
scanf("%d %d %d",&a,&b,&c);
if(a==b&&b==c)
printf("It is an Equilateral");
else if(a==b||b==c||a==c)
printf("It is a Isosceles");
else
printf("It is a Scalene");
return 0;
}