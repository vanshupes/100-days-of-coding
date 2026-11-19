/*Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>
int main()
{
int a[10][10],sum[10],r,c,i,j;
printf("Enter number of rows: ");
scanf("%d",&r);
printf("Enter number of columns: ");
scanf("%d",&c);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("Enter element: ");
scanf("%d",&a[i][j]);
}
}
for(i=0;i<r;i++)
{
sum[i]=0;
for(j=0;j<c;j++)
sum[i]=sum[i]+a[i][j];
}
printf("Sum of each row: \n");
for(i=0;i<r;i++)
printf("Row %d sum = %d\n",i+1,sum[i]);
return 0;
}