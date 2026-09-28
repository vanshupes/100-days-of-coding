#include <stdio.h>
int main()
{
int n,i;
float sum=1;
printf("Enter n: ");
scanf("%d",&n);
for(i=2;i<=n;i++)
sum=sum+(2*i-1)/(float)(2*i);
printf("Sum= %.2f",sum);
return 0;
}