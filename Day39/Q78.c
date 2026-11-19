/*Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>
int main()
{
int a[10][10],n,i,j,sum=0;
printf("Enter order of square matrix: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("Enter element: ");
scanf("%d",&a[i][j]);
}
}
for(i=0;i<n;i++)
sum=sum+a[i][i];
printf("Sum of main diagonal elements = %d",sum);
return 0;
}