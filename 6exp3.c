#include <stdio.h>
void printFibonacciNumbers(int n)
{
    int f1 = 0, f2 = 1, i;
    if (n < 1)
        return;
    printf("%d ", f1);
    for (i = 1; i < n; i++) {
        printf("%d ", f2);
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
}
int main()
{
    unsigned int n;
    printf("enter till how many numbers you want to print fibonacci series:\n");
    scanf("%u",&n);
    printFibonacciNumbers(n);
    return 0;
}