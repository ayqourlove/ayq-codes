#include <stdio.h>
void js(double n);
void js(double n)
{
    printf("%lf",n * n * n);
}
int main()
{
    double x;
    printf("Please enter a number: ");
    scanf("%lf",&x);
    js(x);
    return 0;
}
