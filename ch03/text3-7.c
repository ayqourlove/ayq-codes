#include <stdio.h>

int main()
{
    float en,cm;
    printf("请输入身高（英寸）");
    scanf("%f",&en);
    cm = en*2.54;
    printf("你的身高（厘米）是%f",cm);
    return 0;

}
