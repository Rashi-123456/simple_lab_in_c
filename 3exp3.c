#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3;
    float area;
    printf("enter the coordinates of 1st point:\n");
    scanf("%d%d",&x1,&y1);
    printf("enter the coordinates of 2nd point:\n");
    scanf("%d%d",&x2,&y2);
    printf("enter the coordinates of 3rd point:\n");
    scanf("%d%d",&x3,&y3);
    area=((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)));
    if(area==0){printf("the given points are collinear\n");}
    else{printf("the given points are not collinear\n");}
    return 0;
}