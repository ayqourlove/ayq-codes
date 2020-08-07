#include <stdio.h>
int main()
{
    int s[8],n;
    for(n = 0;n < 8; n++)
        scanf("%d",&s[n]);
    for(n = 7;n >= 0;n--)
        printf("%d",s[n]);
    return 0;
}
