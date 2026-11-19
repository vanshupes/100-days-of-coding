/*Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>
int main()
{
int a[100],n,i,key,pos;
printf("Enter number of elements: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter element: ");
scanf("%d",&a[i]);
}
printf("Enter element to insert: ");
scanf("%d",&key);
i=n-1;
while(i>=0&&a[i]>key)
{
a[i+1]=a[i];
i--;
}
a[i+1]=key;
n++;
printf("Array after insertion: ");
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}