#include <stdio.h>

int main()
{
    float p,b,a,d,c;
    printf("请输入杯数：");
    scanf("%f",&b);
    p=b/2, a=b*8, d=a*2, c=d*3;
    printf("\n%f杯所表示的\n品脱为：%f\n盎司为：%f\n大汤勺为：%f\n茶勺为：%f",b,p,a,d,c);
           return 0;

}
