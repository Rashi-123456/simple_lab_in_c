#include<stdio.h>
int a,b; //global variables
void add()
{
    printf("the addition is %d",a+b);
}
int main()
{
    printf("enter two numbers:\n");
    scanf("%d%d",&a,&b);
    add();
    return 0;
}