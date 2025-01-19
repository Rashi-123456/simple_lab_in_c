#include <stdio.h>
unsigned int factorial(unsigned int N) {
    unsigned int fact = 1, i;
    for (i = 1; i <= N; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    unsigned int N;
    printf("enter the number:\n");
    scanf("%u",&N);
    unsigned int fact = factorial(N);
    printf("Factorial of %u is %u", N, fact);
    return 0;
}