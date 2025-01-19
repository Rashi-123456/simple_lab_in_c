#include <stdio.h>
#include <pthread.h>
void* print_numbers(void* arg) {
    int i;
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return NULL;
}
int main() {
    pthread_t threads[5];
    int i;
    for (i = 0; i < 5; i++) {
        pthread_create(&threads[i], NULL, print_numbers, NULL);
    }
    for (i = 0; i < 5; i++) {
        pthread_join(threads[i], NULL);
    }
    return 0;
}