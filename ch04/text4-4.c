#include <stdio.h>
int main()
{
    float cm,m;
    char name[40];
    printf("�������������:\n");
    scanf("%s",name);
    printf("�����������ߣ����ף�:\n");
    scanf("%f",&cm);
    m = cm / 100;
    printf("%s,����%0.3f�׸�",name,m);
    return 0;
}
