/*Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>
int main()
{
int a[100],n,i,key,low,high,mid,found=0;
printf("Enter number of elements: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter element in sorted order: ");
scanf("%d",&a[i]);
}
printf("Enter element to search: ");
scanf("%d",&key);
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(a[mid]==key)
{
printf("Element found at position %d",mid+1);
found=1;
break;
}
else if(a[mid]<key)
low=mid+1;
else
high=mid-1;
}
if(found==0)
printf("Element not found");
return 0;
}