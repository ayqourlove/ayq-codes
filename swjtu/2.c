#include <stdio.h>
int main()
{
    int a,b;
    float p;
    printf("����������������");
    scanf("%d%d", &a, &b);
    p = (float)a / (float)b;
    printf("%d is %.1f percent of %d", a, 100 *p, b);
    return 0;
}
