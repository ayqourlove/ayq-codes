#include <stdio.h>
int main()
{
    double x;
    int i;
    printf("��������������ǿ��: ");
    scanf("%lf", &x);
    printf("���ε�������");
    i = (int)x;
    switch (i)
    {
        case 1:
        case 2:
        case 3:
            printf("��С��");
            break;
        case 4:
            printf("�����ζ���");
            break;
        case 5:
            printf("ǽ����������ʵ�Ľ����ﱻ�ƻ���");
            break;
        case 6:
            printf("�̴ѵ�������ͨ�����ﱻ�ƻ���");
            break;
        case 7:
            printf("���¹������ѣ���ʵ�Ľ�����Ҳ���ƻ���");
            break;
        default:
            printf("���沨��״������������������٣�");
    }
    return 0;
}
