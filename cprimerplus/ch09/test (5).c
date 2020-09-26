#include <stdio.h>
void larger(double * x, double * y)
{
    double temp = *x;
    if (*y > *x)
        temp = *y;
    *x = *y = temp;
}
int main()
{
    double x, y;
    scanf("%lf %lf", &x, &y);
    larger (&x, &y);
    printf("x = y = %lf", x);
    return 0;
}

