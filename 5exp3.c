#include<stdio.h>
int main()
{
    int n,x,num,freq=0;
    printf("enter how many numbers you want to enter in a array:\n");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("enter the %d element:\n",i+1);
        scanf("%d",&x);
        arr[i]=x;
    }
    printf("the given array is :\n");
    for (int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\nenter the number of which you want frequency:\n");
    scanf("%d",&num);
    for (int i=0;i<n;i++){
        if(arr[i]==num)
        {freq+=1;}
    }
    printf("%d times %d present in the given array\n",freq,num);
    return 0;
}