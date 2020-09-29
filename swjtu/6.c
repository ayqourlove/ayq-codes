#include <stdio.h>
int main()
{
    double x;
    int i;
    printf("请输入地震的里氏强度: ");
    scanf("%lf", &x);
    printf("本次地震后果：");
    i = (int)x;
    switch (i)
    {
        case 1:
        case 2:
        case 3:
            printf("很小！");
            break;
        case 4:
            printf("窗户晃动！");
            break;
        case 5:
            printf("墙倒塌；不结实的建筑物被破坏！");
            break;
        case 6:
            printf("烟囱倒塌；普通建筑物被破坏！");
            break;
        case 7:
            printf("地下管线破裂；结实的建筑物也被破坏！");
            break;
        default:
            printf("地面波浪状起伏；大多数建筑物损毁！");
    }
    return 0;
}
