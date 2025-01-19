#include<stdio.h>
int main()
{
    int n,x;
    int neg=0; //neg is a variable that stores the count of negative numbers in the array
    int pos=0; //pos is a variable that stores the count of positive numbers in the array
    int zeroes=0; //zeroes is a variable that stores the count of zeroes in the array
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
    for(int i=0;i<n;i++){
        if(arr[i]>0){pos+=1;}
        else if(arr[i]<0){neg+=1;}
        else{zeroes+=1;}
    }
    printf("\n%d positive numbers are in the given array\n",pos);
    printf("%d negative numbers in the given array\n",neg);
    printf("%d zeroes are there in the given array\n",zeroes);
    return 0;
}