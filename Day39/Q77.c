/*Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>
int main()
{
int a[10][10],n,i,j,flag=1;
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
{
for(j=i+1;j<n;j++)
{
if(a[i][i]==a[j][j])
{
flag=0;
break;
}
}
}
if(flag==1)
printf("Diagonal elements are distinct");
else
printf("Diagonal elements are not distinct");
return 0;
}