#include <stdio.h>
int main()
{
    float cm,m;
    char name[40];
    printf("请输入你的名字:\n");
    scanf("%s",name);
    printf("请输入你的身高（厘米）:\n");
    scanf("%f",&cm);
    m = cm / 100;
    printf("%s,你有%0.3f米高",name,m);
    return 0;
}
