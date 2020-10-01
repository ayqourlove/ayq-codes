#include <stdio.h>
void count(int n,int m)
{
    double s = 0;
    for (; n <= m; n++)
        s += 1 / ((double)n*n);
    printf("%.5lf\n", s);
}
int main()
{
    int m, n, i = 1;
    while (scanf("%d %d", &n, &m) == 2 && (n != 0 || m != 0))
    {
        printf("Case %d: ", i);
        count(n,m);
    }
    return 0;
}
