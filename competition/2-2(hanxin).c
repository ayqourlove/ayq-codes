#include <stdio.h>
void count(int a, int b, int c)
{
    int j = 0;
    for (int i = 9; i + a <= 100; i += 3)
    {
        int k;
        k = i+a;
        if (k % 5 == b && k % 7 == c)
            {
                j = 1;
                printf("%d\n",k);
                break;
            }
    }
    if (j == 0)
        printf("No answer.");
}
int main()
{
    int a, b, c, i = 1;
    while (scanf("%d %d %d", &a, &b, &c) == 3)
    {
        printf("Case %d: ", i++);
        count(a,b,c);
    }
    return 0;
}
