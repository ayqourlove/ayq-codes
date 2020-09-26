#include <stdio.h>
double power(double n, int p)
{
    double pow = 1;
    int i;
    if (n == 0)
    {
        if(p == 0)
            printf("Wrong!\n");
        else
            pow = 0;
    }
    if (p > 0)
    {
        for (i = 1; i <= p;i++)
        pow *= n;
    }
    if (p < 0)
    {
        p -= 2*p;
        for (i = 1; i <= p;i++)
        pow *= n;
        pow = 1 / pow;
    }
    return pow;
}

int main()
{
    double n, result;
    int p;
    while (scanf("%lf %d", &n, &p) == 2)
    {
        result = power(n, p);
        printf("result = %lf\n", result);
        printf("enter 'q' to quit.\n");
    }
    printf("Bye.");
    return 0;
}
