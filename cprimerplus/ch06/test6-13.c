#include <stdio.h>
int js (int k,int q)
{
    int re;
    int n;
    for (re = 1,n = 0; n < q ;n++)
        re *= k;
    return re;

}
int main()
{
    int sz[8],i;
    for(i = 0; i < 8;i++) {
        sz[i] = js(2,i+1);
    }
    i = 0;
    do {
        printf("%d ",sz[i]);
    } while(++i < 8);
    return 0;
}
