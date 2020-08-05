#include <stdio.h>
int n;
#define ex(a,b) n = a, a = b; b = n;
int main()
{
    int x,y,z;
    scanf("%d,%d,%d",&x,&y,&z);
    if (x > y)
    {ex(x,y);}
    if (y > z)
    {ex(y,z);}
     if (x > y)
    {ex(x,y);}
    printf("%d %d %d",x,y,z);
    return 0;
}
