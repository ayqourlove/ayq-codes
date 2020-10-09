//输入一些数，求最大值最小值和平均值,不需要数组
#include <stdio.h>
#define INF 99999;
int main()
{
    int _max, _min, k, sum = 0, n = 0;
    _max = -INF;
    _min = INF;
    while (scanf("%d", &k) != EOF)
    {
        if(k > _max) _max = k;
        if(k < _min) _min = k;
        sum += k;
        n++;
    }
    printf("average = %lf\n", (double)sum / n);
    printf("max = %d, min = %d", _max, _min);
    return 0;
}
