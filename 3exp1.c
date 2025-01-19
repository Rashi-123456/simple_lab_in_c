#include<stdio.h>
int main()
{
    unsigned int a,b,c;//a,b,c are the sides of a given triangle in variables of data type +ve integer
    printf("enter the sides of the triangle:\n");
    scanf("%u%u%u",&a,&b,&c);
    if(a+b>=c&&a+c>=b&&b+c>=a){
        if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
        {
            printf("the given triangle is an right angeled triangle\n");
        }
        if(a==b&&b==c)
        {
            printf("the given triangle is an equilateral triangle\n");
        }
        else if(a!=b&&b!=c&&a!=c)
        {
            printf("the given triangle is an scalene triangle\n");
        }
        else
        {
            printf("the given triangle is a isosceles triangle\n");
        }
    }
    else{
        printf("the given triangle does not exist\n");
    }
    return 0;
}