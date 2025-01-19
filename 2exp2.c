#include<stdio.h>
int main()
{
    float c,f; //c is celcius and f is farenheit temperature variables in float data type
    printf("enter the temperature in celcuis:\n");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("the given temperature %f in celcius is %f in farenheit.\n",c,f);
    return 0;
}