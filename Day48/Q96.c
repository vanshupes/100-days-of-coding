#include <stdio.h>
int main()
{
char str[200],temp;
int i=0,start=0,end;
printf("Enter a sentence: ");
scanf("%[^\n]",str);
while(1)
{
if(str[i]==' '||str[i]=='\0')
{
end=i-1;
while(start<end)
{
temp=str[start];
str[start]=str[end];
str[end]=temp;
start++;
end--;
}
start=i+1;
}
if(str[i]=='\0')
break;
i++;
}
printf("Reversed words = %s",str);
return 0;
}