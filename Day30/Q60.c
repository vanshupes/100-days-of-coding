/*Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>
int main()
{
int a[100],n,i,positive=0,negative=0,zero=0;
printf("Enter number of elements: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter element: ");
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>0)
positive++;
else if(a[i]<0)
negative++;
else
zero++;
}
printf("Positive elements= %d\n",positive);
printf("Negative elements= %d\n",negative);
printf("Zero elements= %d",zero);
return 0;
}