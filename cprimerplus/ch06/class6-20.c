#include <stdio.h>
double power(double n,int p);
int main()
{
    double n,re;
    int p;
    while(scanf("%lf %d",&n,&p) == 2){
        re = power(n,p);
        printf("%.5g\n",re);
    }
    printf("Done!");
    return 0;
}
double power(double n,int p)
{
    float pow, i;
    for(pow = i = 1; i <= p;i++)
    {
        pow *= n;
    }
    return pow;
}
