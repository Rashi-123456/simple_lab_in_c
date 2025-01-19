#include<stdio.h>
int x=10;
void abc()
{
    printf("x is %d\n",x); // will not give a error as x is a global variable
    printf("y is %d\n",y); //gives error in the form undeclared(either use in this function) as y is a local variable
}
int main()
{
    int y=20;
    abc();
    return 0;
}