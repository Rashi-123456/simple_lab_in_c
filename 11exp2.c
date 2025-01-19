#include <math.h>
#include <stdio.h>
int main()
{
    printf("2^5 using pow() function: %.0f\n", pow(2, 5));
    printf("2^5 using left shift: %d\n", (1 << 5));
    printf("to print 2 using right shift: %d\n",(5>>1));
    return 0;
}