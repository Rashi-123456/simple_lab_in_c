#include <stdio.h>
#define ADD(x, y) ((x) + (y))
#define SUBTRACT(x, y) ((x) - (y))
#define MULTIPLY(x, y) ((x) * (y))
#define DIVIDE(x, y) ((x) / (y))
int main() 
{
    int a,b;
    printf("enter the two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("Addition of %d and %d: %d\n", a, b, ADD(a, b));
    printf("Subtraction of %d and %d: %d\n", a, b, SUBTRACT(a, b));
    printf("Multiplication of %d and %d: %d\n", a, b, MULTIPLY(a, b));
    if (b==0){printf("cant divide a number by zero\n");}
    else{printf("Division of %d and %d: %d\n", a, b, DIVIDE(a, b));}
    return 0;
}
