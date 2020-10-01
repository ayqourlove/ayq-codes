#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    while(a != 0 || b != 0 || c != 0)
    {
        int i = 1;
        printf("Case %d: ", i++);
        printf("%d.", a / b);
        double k = (double)a / b;
        for (int n = 1; n <= c; n++)
        {
            k *= 10;
        }
        printf("%d", (int)(k+0.5));
        scanf("%d%d%d\n", &a, &b, &c);
    }
    return 0;
}
