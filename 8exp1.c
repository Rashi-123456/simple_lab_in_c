#include <stdio.h>
int main()
{
    int var = 10;
    float var1=15.56;
    char var2='a';
    int* ptr=&var;
    float* ptr1=&var1;
    char* ptr2=&var2;
    printf("address of ptr = %p \n", ptr);
    printf("Value of var = %d \n", var);
    printf("Value of *ptr = %d \n", *ptr);
    printf("address of ptr1 = %p \n", ptr1);
    printf("Value of var1 = %d \n", var1);
    printf("Value of *ptr1 = %d \n", *ptr1);
    printf("address of ptr2 = %p \n", ptr2);
    printf("Value of var2 = %d \n", var2);
    printf("Value of *ptr2 = %d \n", *ptr2);
    return 0;
}