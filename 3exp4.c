#include<stdio.h>
int main()
{
    unsigned int year,y,d,m,c,day;
    printf("enter the year:\n");
    scanf("%u",&year);
    y=year%100; //y is needed for calculating the day of the week
    d=1; //d is the day which is 1st january
    m=13; //m is the month for eaxample for jan it is 13 and for feb it is 14 and so on
    c=year/100; //c is century which is needed for calculating the day of the week
    day=(d+13*(m+1)/5+y+y/4+c/4+5*c)%7;
    switch (day)
    {
        case 0:
        printf("saturday");
        break;
        case 1:
        printf("sunday");
        break;
        case 2:
        printf("monday");
        break;
        case 3:
        printf("tuesday");
        break;
        case 4:
        printf("wednesday");
        break;
        case 5:
        printf("thursday");
        break;
        case 6:
        printf("friday");
        break;
        default:
        printf("invalid day");
        break;
    }
    return 0;
}