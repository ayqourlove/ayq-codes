#include <stdio.h>
int main()
{
    int n,i;
    char x = 'A';
    for(n = 1; n <= 6;n++){
        for(i = 1; i <= n;i++)
        printf("%c",x++);
        printf("\n");}
    return 0;
}
