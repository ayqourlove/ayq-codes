#include <stdio.h>
int main()
{
    int n,x[10];
    for (n = 0; n < 10; n++)
        scanf("%d",&x[n]);
    for (n = 9; n > 0; n--)
        printf("%d ",x[n]);
    printf("%d",x[0]);//���һ������û�пո�
    return 0;
}
