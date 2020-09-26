#include <stdio.h>
double fing(double n, int p);
double power(double n, int p)
{
    double pow = 1;
     if (n == 0)
    {
        if(p == 0)
            printf("Wrong!\n");
        else
            pow = 0;
    }
    if (n != 0)
    {
        if (p == 0)
            return 1;
        if (p > 0)
            pow = fing(n, p);
        if (p < 0)
        {
            p -= 2*p;
            pow = fing(n, p);
            pow = 1 / pow;
        }
    }
    return pow;
}

double fing(double n, int p)
{
    if (p > 1)
        return n*fing(n, p-1);
    return n;
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
