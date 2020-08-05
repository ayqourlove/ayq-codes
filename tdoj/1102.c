#include <stdio.h>
int main()
{
    int a,b,n,x;
    scanf("%d",&n);
    x = 0;
    while(++x <= n) {
        scanf("%d %d",&a,&b);
        if(a>b){
            printf("%d\n",a);
        }
        else{
            printf("%d\n",b);
        }
    }
    return 0;
}
