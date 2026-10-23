#include <stdio.h>
int main()
{
int a[10][10],r,c,i,j;
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
printf("Matrix: \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
printf("%d ",a[i][j]);
printf("\n");
}
return 0;
}