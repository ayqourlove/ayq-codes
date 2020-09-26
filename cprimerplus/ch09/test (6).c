#include <stdio.h>
int temp;
#define exchange(x, y) temp = y, y = x, x = temp;

void place(double *s, double *m, double *l)
{
    if (*s > *m)
        exchange(*s, *m);
    if (*m > *l)
        exchange(*m, *l);
    if (*s > *m)
        exchange(*s, *m);
}

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    place(&a, &b, &c);
    printf("%lf %lf %lf", a, b, c);
    return 0;
}
