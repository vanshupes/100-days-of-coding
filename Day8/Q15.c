#include <stdio.h>
int main() {
char ch;
printf("Enter a character: ");
scanf("%c",&ch);
if(ch>='A'&&ch<='Z')
printf("It is Uppercase Alphabet ");
else if(ch>='a'&&ch<='z')
printf("It is Lowercase Alphabet ");
else if(ch>='0'&&ch<='9')
printf("It is Digit");
else
printf("It is Special Character ");
return 0;
}