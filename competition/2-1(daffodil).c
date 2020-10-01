#include <stdio.h>
int main()
{
    int a,b,c,d;
    for (int n = 100; n <= 999; n++)
    {
        a = n / 100, b = (n % 100) / 10, c = n % 10;
        d = a*a*a + b*b*b + c*c*c;
        if (n == d)
            printf("%d\n", n);
    }
    return 0;
}
