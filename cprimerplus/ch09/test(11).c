#include <stdio.h>
void Fiboncci(unsigned n)
{
    unsigned long i = 2, n1 = 1, n2 = 1, n3;
    if (n == 1)
        printf("1,");
    else
        printf("1,1,");
    while(i++ < n)
    {
        n3 = n1 + n2;
        n1 = n2, n2 = n3;
        printf("%ld,",n3);
    }
}
int main()
{
    unsigned n;
    scanf("%u", &n);
    Fiboncci(n);
    return 0;
}
