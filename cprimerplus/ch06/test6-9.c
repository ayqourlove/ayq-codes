#include <stdio.h>
double js (double a,double b);
int main()
{
    double a,b,x;
    while (scanf("%lf %lf",&a,&b) == 2) {
        x = js (a,b);
        printf("%lf\n",x);}
    return 0;
}

double js (double a,double b)
{
    double x;
    x = (a-b)/(a*b);
    return x;
}
