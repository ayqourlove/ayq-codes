#include <stdio.h>
#define TEN 10
int main()
{
    char n = 96;
    while (n++ <= 'g') {
        printf("%5c",n);
    }
    return 0;
}
