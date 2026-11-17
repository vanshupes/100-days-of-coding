/*Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>
int main() {
    int r;
    float pie=3.14;
    float area,circumference;
    printf("Enter the Radius: ");
    scanf("%d",&r);
    circumference=2*pie*r;
    area=pie*r*r;
    printf("Area of Circle: %f\n",area);
    printf("Circumference of Circle: %f\n",circumference);
    return 0;
}