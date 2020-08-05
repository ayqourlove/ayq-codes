#include <stdio.h>
int main()
{
    int a,b,n,x1,x2;
    scanf("%d %d",&a,&b);
    if (a > b){
        n=a;a=b;b=n;
    }
    x1 = b;
    while (x1%b != 0 | x1%a != 0)  {
        x1 += b;
    }
    x2 = a;
    while (a%x2 != 0 | b%x2 != 0)  {
        x2 -= 1;
    }
    printf("%d %d",x1,x2);
    return 0;

}
