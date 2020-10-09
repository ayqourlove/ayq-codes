#include <stdio.h>//输入一些数统计个数，无需数组
int main()
{
    int n = 0,k;
    while (scanf("%d",&k) != EOF)
        n++;
    printf("%d",n);
    return 0;
}
