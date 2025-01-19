#include<stdio.h>
int main()
{
    int a,b,sum;//a and b are variables in which the numbers are stored and sum is the addition of the given numbers
    printf("enter the 1st number:\n");
    scanf("%d",&a);
    printf("enter the 2nd number:\n");
    scanf("%d",&b);
    sum=a+b;
    printf("the sum of the given numbers is %d",sum);
    return 0;
}