/*Q1: Write a program to input two numbers and display their sum.*/
#include <stdio.h>
int main() {
    int a;
    int b;
    int sum,diff,product,quotient;
    printf("Enter the numbers: ");
    scanf("%d",&a);
    scanf("%d",&b);
    sum=a+b;
    diff=a-b;
    product=a*b;
    quotient=a/b;
    printf("Sum: %d\n",sum);
    printf("Difference: %d\n",diff);
    printf("Product: %d\n",product);
    printf("Quotient: %d\n",quotient);
    return 0;
}