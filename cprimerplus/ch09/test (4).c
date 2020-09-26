#include <stdio.h>
double Harmonic_mean( double d1, double d2)
{
    double H_m;
    d1 = 1 / d1, d2 = 1 / d2;
    H_m = (d1 + d2) / 2;
    H_m = 1 / H_m;
    return H_m;
}

int main()
{
    double d1, d2, H_m;
    scanf("%lf %lf", &d1, &d2);
    printf("%.3lf", H_m = Harmonic_mean( d1, d2));
    return 0;
}
