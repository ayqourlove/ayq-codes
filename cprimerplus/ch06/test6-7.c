#include <stdio.h>
#include <string.h>
int main()
{
    int i,n,x;
    char s[100];
    scanf("%s",s);
    n = strlen(s);
    x = n - 1;
    for(i = 0;i < n; i++)
        printf("%c",s[x--]);
    return 0;
}
