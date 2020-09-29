#include <stdio.h>
int main()
{
    int a, b, l;
    for (b = 1; b <= 9; b++)
    {
        for (l = 1; l < b; l++)
            printf("    ");
        for (a = b; a <= 9; a++)
        {
            printf("%4d", a*b);
        }
        printf("\n");
    }
    return 0;
}
