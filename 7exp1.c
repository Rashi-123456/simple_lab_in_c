#include <stdio.h>
typedef struct complexNumber {
    int real;
    int img;
} complex;
complex add(complex x, complex y);
complex add(complex x, complex y)
{
    complex add;
    add.real = x.real + y.real;
    add.img = x.img + y.img;
    return (add);
}
complex subtract(complex x, complex y);
complex subtract(complex x, complex y)
{
    complex subtract;
    subtract.real = x.real - y.real;
    subtract.img = x.img - y.img;
    return (subtract);
}
int main()
{
    complex a, b, sum,subtraction;
    int r1,i1,r2,i2;
    printf("enter the real and imaginary part of 1st complex number:\n");
    scanf("%d%d",&r1,&i1);
    a.real = r1;
    a.img = i1;
    printf("enter the real and imaginary part of 2nd complex number:\n");
    scanf("%d%d",&r2,&i2);
    b.real = r2;
    b.img = i2;
    printf("the 1st complex number is:\n");
    printf("a = %d + %di\n", a.real, a.img);
    printf("the 2nd complex number is:\n");
    printf("b = %d + %di\n", b.real, b.img);
    sum = add(a, b);
    subtraction = subtract(a, b);
    printf("the sum of the given two complex number is:\n");
    printf("sum = %d + %di", sum.real, sum.img);
    printf("\nthe subtraction of the given two complex number is:\n");
    printf("subtraction = %d - %di", subtraction.real, subtraction.img);
    return 0;
}