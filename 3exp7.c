#include<stdio.h>
int main()
{
    unsigned int n;
    printf("enter the number:\n");
    scanf("%u",&n);
    for(int i=1;i<11;i++)
    {
        printf("%uX%d=%d\n",n,i,n*i);
    }
    return 0;
}