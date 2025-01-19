#include <stdio.h>
int isPrime(int N) {
    for (int i = 2; i < N; i++) {
        if (N % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int N ;
    printf("enter the number:\n");
    scanf("%d",&N);
    if (isPrime(N)) {
        printf("Yes %d is a prime number \n",N);
    }
    else {
        printf("No %d is not a prime number \n",N);
    }
    return 0;
}