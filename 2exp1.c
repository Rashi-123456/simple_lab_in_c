#include<stdio.h>
int main()
{
    unsigned int l,b; //l is the length and b is the breadth are variables stored in unsigned integer data type
    float area,perimeter; //area and perimeter are variables stored in float data type
    printf("enter the length of the rectangle:\n");
    scanf("%u",&l);
    printf("enter the breadth of the rectangle:\n");
    scanf("%u",&b);
    area=l*b;
    perimeter=2*(l+b);
    printf("the area of the given rectangle is %f and perimeter of given rectangle is %f\n",area,perimeter);
    return 0;
}