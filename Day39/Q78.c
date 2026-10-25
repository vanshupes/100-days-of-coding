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