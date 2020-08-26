#include <stdio.h>
#define base 10
#define addtiontime 1.5
#define l300 0.15
#define m150 0.2
#define rest 0.25

int main()
{
    float hours,all,tax,gets;
    printf("enter your work hours:");
    scanf("%f",&hours);
    if (hours >= 40)
        hours = 40 + addtiontime * (hours - 40);
    all = hours * base;
    if (all <= 300)
        tax = l300 * all;
    if (all > 300 && all <= 450)
        tax = 45 + m150 * (all - 300);
    if (all > 450)
        tax = 75 + rest * (all - 450);
    gets = all - tax;
    printf("all = %.2f$, tax = %.2f$, gets = %.2f$",all,tax,gets);
    return 0;
}
