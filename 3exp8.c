#include<stdio.h>
int main()
{
    int rows=3;
    int count=0;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            count+=1;
            printf("%d ", count);
        }
        printf("\n");
    }
    return 0;
}