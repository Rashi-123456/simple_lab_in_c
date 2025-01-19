#include<stdio.h>
int main()
{
    {int x=10,y=20;
    {printf("x=%d and y=%d\n",x,y); // will give the value of x=10 and y=20
    {int y=40; // we are defining an local variable within this block which will not change the value of the initial y=20
    x++;
    y++;
    printf("x=%d and y=%d\n",x,y);// will increment the value of the initial x by 1 and the new local variable created will give y=41 after incrementing the new variable y 
    }
    printf("x=%d and y=%d\n",x,y); // will give x=11 as it is incremented while y will be given same as the initial value of y that is 20
    }}
    return 0;
}