#include <stdio.h>
int main()
{
    int x1, x2;
    do
    {
        printf("Input x1, x2:\n");
        switch(scanf("%d,%d", &x1, &x2))
        {
            case 0: getchar();
                    getchar();
                    x1 = x2 = 0;
                    break;
            case 1: getchar();
                    x1 = x2 = 0;
                    break;
        }
        if (1)
        {
            while (getchar() != '\n')
                continue;
            continue;
        }
    }
    while (x1 * x2 >= 0);
    printf("x1=%d,x2=%d\n", x1, x2);
    return 0;
}
