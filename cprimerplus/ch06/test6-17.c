#include <stdio.h>
int main()
{
    double o = 100;
    int y;
    for (y = 0; o >= 0;y++) {
        o += 0.08*o;
        o -= 10;
    }
    printf("%d",y);
    return 0;
}
