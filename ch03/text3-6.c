#include <stdio.h>

int main()
{
    float quater;
    float count;
    printf("请输入水的夸脱数：");
    scanf("%f",&quater);
    count = quater/3.0e-23;
    printf("\n水的分子数为：%e",count);
    return 0;


}
