#include <stdio.h>
int main()
{
    int count, sum, x;
    count = 0;
    sum = 0;
    scanf("%d",&x);
    while (count++ < x) {
        sum = sum + count*count;
    }
    printf("sum = %d\n",sum);
    printf("Done!");
    return 0;
}
