#include <stdio.h>
#include <string.h>
void reverse(char* str) {
    int first = 0;
    int last = strlen(str) - 1;
    char temp;
    while (first < last) {
        temp = str[first];
        str[first] = str[last];
        str[last] = temp;
        first++;
        last--;
    }
}
int main() {
    char str[100];
    printf("enter the string to be reversed:\n");
    scanf("%s",&str);
    reverse(str);
    printf("%s\n", str);
    return 0;
}