#include <stdio.h>//µ¹ĞòÊä³öÊäÈë
#include <string.h>
int main()
{
    char ch[255];
    int i;
    scanf("%s",ch);
    i = strlen(ch);
    while (--i >= 0) {
        printf("%c",ch[i]);
    }
    return 0;
}
