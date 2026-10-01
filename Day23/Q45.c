#include <stdio.h>
int main()
{
int n,i;
float sum=0;
printf("Enter n: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
sum=sum+(2*i)/(float)(4*i-1);
printf("Sum= %.2f",sum);
return 0;
}