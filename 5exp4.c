#include<stdio.h>
int main()
{
    int r1,c1,r2,c2;
    printf("enter the rows and columns of 1st array\n");
    scanf("%d%d",&r1,&c1);
    int arr[r1][c1];
    printf("enter the elemnts of 1st array\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("enter the element for %d row %d column",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("enter the rows and columns of 2nd array\n");
    scanf("%d%d",&r2,&c2);
    int arr1[r2][c2];
    printf("enter the elements of 2nd array\n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            printf("enter the element for %d row %d column",i+1,j+1);
            scanf("%d",&arr1[i][j]);}}
    printf("the 1st matrice is\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("%d\t",arr[i][j]);}
        printf("\n");}
    printf("the 2nd matrice is\n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            printf("%d\t",arr1[i][j]);}
        printf("\n");}
    if(c1==r2){
        int arr2[r1][c2];
        printf("the multiplication of the given two matrices is\n");
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                arr2[i][j]=0;
                for (int k=0;k<r2;k++){
                    arr2[i][j]+=arr[i][k]*arr1[k][j];
                }
                printf("%d\t",arr2[i][j]);}
            printf("\n");}}
    else{printf("matrices of these order cant be multiplied !!\n");}
    return 0;
}