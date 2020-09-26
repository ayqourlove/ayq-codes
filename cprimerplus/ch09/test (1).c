#include <stdio.h>
double get_small(double d1, double d2)
{
    double smaller = d1;
    if(d1 > d2)
        smaller = d2;
    return smaller;
}

int main()
{
    double a, b, smaller;
    scanf("%lf %lf", &a, &b);
    smaller = get_small( a, b);
    printf("%lf", smaller);
    return 0;
}
