#include <stdio.h>
int main()
{   char a[40],b[40];
    printf("请输入你的名字:\n");
    scanf("%s",a);
    printf("请输入你的姓氏\n");
    scanf("%s",b);
    printf("\n%s,%s",a,b);
    return 0;
}
