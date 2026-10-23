#include <stdio.h>
int main()
{
int n,digit,i,max=0,result=0,count;
printf("Enter an integer number: ");
scanf("%d",&n);
for(i=0;i<=9;i++)
{
count=0;
int temp=n;
while(temp!=0)
{
digit=temp%10;
if(digit==i)
count++;
temp=temp/10;
}
if(count>max)
{
max=count;
result=i;
}
}
printf("Most frequent digit = %d\n",result);
printf("Occurrences = %d",max);
return 0;
}