#include <stdio.h>
double js (double k,int q)
{
    double re;
    int n;
    for (re = 1,n = 0; n < q ;n++)
        re *= k;
    return re;

}

int main()
{
    double n,o,sum1,sum2;
    int i;
    scanf("%lf",&n);
    sum1 = sum2 = 0;
    for (o = 1,i = 0; i < n;i++) {
        sum1 += 1 / o,sum2 += js(-1,i)*(1/o);
        o++;
    }
    printf("%lf\n%lf",sum1,sum2);
    return 0;

}
