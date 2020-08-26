#include <stdio.h>

int main()
{
    unsigned int n,i,k,j;
    j = 0;
    while (scanf("%u",&n) == 1)
    {
        for(i = 2; i <= n; i++)
        {
            for(k = 2; (k * k) <= i; k++)
            {
                if(i % k == 0)
                    j = 1;
            }
            if(j == 0)
            {
                printf("%u ",i);
            }
            j = 0;
        }
    }
    return 0;
}
