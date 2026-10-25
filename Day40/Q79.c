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
printf("Diagonal traversal: ");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(i==j)
printf("%d ",a[i][j]);
}
}
return 0;
}