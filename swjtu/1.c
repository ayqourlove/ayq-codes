#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("input data is:");
    scanf("%d",&a);
    b = a / 100, c = (a - 100 * b) / 10, d = a - 100 * b - 10 * c;
    printf("The sum of the total bit is %d\n", b + c + d);
    return 0;
}
