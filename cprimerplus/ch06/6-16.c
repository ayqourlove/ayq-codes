#include <stdio.h>
int main()
{
    int y = 0;
    double o1,o2;
    o1 = o2 = 100;
    while (o2 <= o1) {
        o1 += 10;
        o2 += 0.05 * o2;
        y++;
    }
    printf("The year is %dth.\nDa is %.3lf$ and De is %.3lf$",y,o1,o2);
    return 0;
}
