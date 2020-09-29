#include <stdio.h>
int main()
{
    int i;
    float oh,sumh;
    oh = 50, sumh = 100;
    for(i = 1; i <= 9; i++)
    {
        sumh = oh * 2 + sumh;
        oh = oh / 2;
    }
    printf("the total of road is %f\n", sumh);
    printf("the tenth is %f meter\n", oh);
    return 0;
}
