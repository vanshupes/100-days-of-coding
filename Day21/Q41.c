/*Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>
int main()
{
int n,first,last,digits,power,temp;
printf("Enter a number: ");
scanf("%d",&n);
last=n%10;
digits=(int)log10(n);
power=(int)pow(10,digits);
first=n/power;
temp=n%power;
temp=temp/10;
n=last*power+temp*10+first;
printf("After swapping= %d",n);
return 0;
}