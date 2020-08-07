#include <stdio.h>
int main()
{
    char x,y,z;
    z = 'A';
    scanf("%c",&y);
    x = y;
    int n = 0,i;
    while (n++ < x - 'A' + 1){
        z = 'A';
        for (i = 0;i < x - 'A' +1 - n; i++)
            printf(" ");
        for (i = 0; i < n; i++)
            printf("%c",z++);
        z = 'A' + n - 2;
        for (i = 0; i < n - 1; i++)
            printf("%c",z--);
        x = y;
        printf("\n");
        }
    return 0;
}
