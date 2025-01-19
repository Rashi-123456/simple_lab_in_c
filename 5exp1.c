#include<stdio.h>
int main()
{
    int n,x;
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
    for (int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;}
        }
    }
    printf("\nthe second largest number in the given array is %d\n",arr[n-2]);
    return 0;
}