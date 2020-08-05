#include <stdio.h>
int main ()
{
    int n,a,b,k;
    scanf("%d",&n);
    k = 0;
    while (k++ < n) {
        scanf("%d %d",&a,&b);
        printf("%d\n", a + b);
    }
    return 0;
}
