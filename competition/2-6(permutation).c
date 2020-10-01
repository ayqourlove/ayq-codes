#include <stdio.h>
#include <string.h>
int divide_judge(int x1, int x2, int x3)
{
    int f[10];
    memset(f, 0, sizeof(f));//初始化数组
    int a1, a2, a3, b1, b2, b3, c1, c2, c3;
    int j = 1;
    a1 = x1 / 100; f[a1]++;
    a2 = (x1 % 100) / 10; f[a2]++;
    a3 = x1 % 10; f[a3]++;
    b1 = x2 / 100; f[b1]++;
    b2 = (x2 % 100) / 10; f[b2]++;
    b3 = x2 % 10; f[b3]++;
    c1 = x3 / 100; f[c1]++;
    c2 = (x3 % 100) / 10; f[c2]++;
    c3 = x3 % 10; f[c3]++;
    for(int i =1; i <= 9; i++)
    {
        if (f[i] == 0)
        {
            j = 0;
            break;
        }
    }
    return j;
}
int main()
{
    int x1, x2, x3;
    for (int i = 123; i <=329; i++)
    {
        x1 = i, x2 = 2*i, x3 = 3*i;
        if (divide_judge(x1, x2, x3) == 0)
            continue;
        else printf("%d %d %d\n", x1, x2, x3);
    }
    return 0;
}
