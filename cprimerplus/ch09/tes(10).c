#include <stdio.h>

void to_base_n(int n, int j)
{
    int r;
    r = n % j;
    if (n >= j)
        to_base_n(n / j,j);
    printf("%d",r);
    return ;
}

int main()
{
    int n, j;
    scanf("%d %d", &n, &j);
    to_base_n(n, j);
    return 0;
}
