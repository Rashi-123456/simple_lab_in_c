#include<stdio.h>
int main()
{
    char n[50]; //name is a variable which stores the name in character data type
    unsigned int ag; // ag is a variable which stores the age in +ve integer data type
    printf("enter your name:\n");
    scanf("%s",&n);
    printf("enter your age:\n");
    scanf("%u",&ag);
    printf("your name is %s and age is %u!",n,ag);
    return 0;
}