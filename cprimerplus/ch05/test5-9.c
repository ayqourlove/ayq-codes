#include <stdio.h>
void CHANGE(double n);

int main()
{
    int ret;
    double x;
    printf("Enter a num of TF: ");
    while (1) {
        ret = scanf("%lf",&x);
        if(ret != 1) break;
        CHANGE(x);
    }
    printf("Done!");
    return 0;
}
void CHANGE(double n)
{
    const double  tc= 5.0/9.0*(n-32.0), tk= tc + 273.16;
    printf("%.2lf TF is %.2lf tc, %.2lf TK\n", n, tc, tk);
    printf("Enter the next: ");
}
//diffcult
