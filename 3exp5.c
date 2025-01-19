#include<stdio.h>
int main()
{
    unsigned int l1,b1,l2,b2,l3,b3;
    float p1,p2,p3,max; //the three p are the perimeters of the given rectangles
    printf("enter the length and breadth of 1st rectangle:\n");
    scanf("%u%u",&l1,&b1);
    printf("enter the length and breadth of 2st rectangle:\n");
    scanf("%u%u",&l2,&b2);
    printf("enter the length and breadth of 3st rectangle:\n");
    scanf("%u%u",&l3,&b3);
    p1=2*(l1+b1);
    p2=2*(l2+b2);
    p3=2*(l3+b3);
    max=(p1>p2) ? ((p1>p3) ? p1:p3):((p2>p3) ? p2:p3);
    if(max==p1){printf("the maximum perimeter is of 1st rectangle which is %.2f\n",max);}
    else if(max==p2){printf("the maximum perimeter is of 2nd rectangle which is %.2f\n",max);}
    else{printf("the maximum perimeter is of 3rd rectangle which is %.2f\n",max);}
    return 0;
}