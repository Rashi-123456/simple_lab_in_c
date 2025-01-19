#include<stdio.h>
int fun()
{
    static int count=0;
    count++;
    return count;
}
int fun1()
{
    int count1=0;
    count1++;
    return count1;
}
int main()
{
    printf("for the fun function\n%d\n",fun());
    printf("%d\n",fun());
    printf("for the fun1 function\n%d\n",fun1());
    printf("%d\n",fun1());
    return 0;
}