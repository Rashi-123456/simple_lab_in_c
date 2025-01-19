#include<stdio.h>
int main()
{
    int num,i,j,ans;
    printf("number to be entered at your choice:\n");
    scanf("%d",&num);
    for(i=1;i<=20;i++){
        for(j=1;j<=i;j++){
        ans=(i*i*i)+(j*j*j);
        if (num==ans){
            printf("%d^3+%d^3\n",i,j);
        }
    }}
    return 0;
}