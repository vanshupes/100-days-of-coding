#include <stdio.h>
#include <string.h>
int main()
{
char str1[100],str2[100],temp[200];
int i,j,flag=0;
printf("Enter first string: ");
scanf("%s",str1);
printf("Enter second string: ");
scanf("%s",str2);
if(strlen(str1)==strlen(str2))
{
strcpy(temp,str1);
strcat(temp,str1);
if(strstr(temp,str2)!=NULL)
flag=1;
}
if(flag==1)
printf("Strings are rotations of each other");
else
printf("Strings are not rotations of each other");
return 0;
}