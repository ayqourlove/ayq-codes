#include <stdio.h>
long long int counts(int i)
{
    long long x, k;
    for (k = 0, x = 1; k < i; k++)
        x *= 2;
    x -= 1;
    for (k = 2; k*k <= x; k++)
    {
        if ((x % k) == 0)
        {
            x = 0;
            break;
        }
    }
    if(x != 0)
        printf("2^%d-1=%lld\n", i, x);
    return x;
}
int main()
{
    int n, i, j, count = 0;
    printf("Input n:\n");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        j = counts(i);
        if (j != 0)
            count++;
    }
    printf("count=%d", count);
    return 0;
}
