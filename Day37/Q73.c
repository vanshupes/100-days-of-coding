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