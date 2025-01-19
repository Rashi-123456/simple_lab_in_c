#include<stdio.h>
struct employee
{
    char name[20];
    float basic;
    float da;
    float gross;
}e[100];
void main()
{
int i;
for(i=0;i<100;i++){
    printf("enter the name and basic pay:\n");
    scanf("%s%f",e[i].name,&e[i].basic);
    e[i].da=52.0/100*e[i].basic;
    e[i].gross=e[i].da+e[i].basic;
    printf("name=%s gross=%f\n",e[i].name,e[i].gross);
}}