#include <stdio.h>

int main()
{
    int o,t,s1,s2;
    o = t = s1 = s2 = 0;
    int n;
    while (scanf("%d",&n) == 1 && n != 0)
    {
        if(n%2 != 0)
        {
            o++;
            s1 += n;
        }
        else
        {
            t++;
            s2 += n;
        }
    }
    printf("����������%d�������ͣ�%d��ż��������%d��ż���ͣ�%d��",o,s1,t,s2);
    return 0;
}
