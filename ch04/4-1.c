#include <stdio.h>关于scanf输入时的缓冲区
int main()
{
    char name[40];
    int size;
    scanf("%s",name);//若此时加入空格会出问题
    printf("%s\n",name);
    scanf("%d",&size);
    printf("%d",size);
    return 0;
}
