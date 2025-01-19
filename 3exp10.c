#include<stdio.h>
int main()
{
    float gr=0.10,population=100000; //where gr is the growth rate
    int years=10;
    printf("population at the end of the each year are:\n");
    for(int i=1;i<=years;i++)
    {
        population+=population*gr;
        printf("the population in the year %d is %f\n",i,population);
    }
    return 0;
}