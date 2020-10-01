#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = n; i >=1; i--)
    {
        for(int s = n; s - i > 0;s--)
            printf(" ");
        for(int k = 1; k <= (2 * i - 1); k++)
            printf("#");
        printf("\n");
    }
    return 0;
}
