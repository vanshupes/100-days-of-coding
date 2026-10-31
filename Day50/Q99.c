#include <stdio.h>
int main()
{
char date[20];
printf("Enter date (dd/04/yyyy): ");
scanf("%s",date);
date[3]='\0';
printf("%s-Apr-%s",date,date+6);
return 0;
}