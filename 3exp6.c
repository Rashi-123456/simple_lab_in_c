#include<stdio.h>
int main()
{
    unsigned int n,pnum,nnum,zeroes; //where n is the no. of no.s entered and pnum and nnum are no.of +ve and -ve no.s
    pnum=0;
    nnum=0;
    zeroes=0;
    printf("how many numbers you want to add:\n");
    scanf("%u",&n);
    for(int i=0;i<n;i++)
    {
        int num;
        printf("enter the number:\n");
        scanf("%d",&num);
        if (num>0){
            pnum+=1;
        }
        else if(num<0){
            nnum=nnum+1;}
        else {
            zeroes+=1;
        }
    }
    printf("the number of positive numbers entered are %u\n",pnum);
    printf("the number of negative numbers entered are %u\n",nnum);
    printf("the number of zeroes entered are %u\n",zeroes);
    return 0;
}