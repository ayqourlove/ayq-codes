#include <stdio.h>


int main()
{
    int n,x;
    float sum,k;
    sum = 0;//×¢Òâ³õÊ¼»¯
    scanf("%d", &n);
    for (x = 0; x < n; x++)
    {
        scanf("%f", &k);
        sum += k;
    }
    printf("%.2f", sum / n);
    return 0;
}
