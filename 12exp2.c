#include <stdio.h>
#define CUBE(x) ((x)*(x)*(x))
int main() {
    int num;
    printf("enter the number:\n");
    scanf("%d",&num);
    printf("The cube of %d is %d\n", num, CUBE(num));
    return 0;
}