#include <stdio.h>
double figure(double rate, int year, double money);
int main()
{
    int year;
    double money, rate1 = 0.0225, rate2 = 0.0243, rate3 = 0.0270, rate5 = 0.0288, rate8 = 0.03;
    printf("Please enter year,capital:");
    scanf("%d,%lf", &year, &money);
    switch (year)
    {
        case 1:
            printf("rate = %lf, ",rate1);
            printf("deposit = %lf\n", figure(rate1, year,money));
            break;
        case 2:
            printf("rate = %lf, ",rate2);
            printf("deposit = %lf\n", figure(rate2, year,money));
            break;
        case 3:
            printf("rate = %lf, ",rate3);
            printf("deposit = %lf\n", figure(rate3, year,money));
            break;
        case 5:
            printf("rate = %lf, ",rate5);
            printf("deposit = %lf\n", figure(rate5, year,money));
            break;
        case 8:
            printf("rate = %lf, ",rate8);
            printf("deposit = %lf\n", figure(rate8, year,money));
            break;
        default:
            printf("Error rate!");
    }
    return 0;
}

double figure(double rate, int year, double money)
{
    double deposit;
    deposit = money;
    int y;
    for (y = 1; y <= year; y++)
    {
        deposit += deposit*rate;
    }
    return deposit;
}
