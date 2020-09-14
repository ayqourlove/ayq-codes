#include <stdio.h>
char get_first(void)
{
    int ch;
    while((ch = getchar()) == ' ')
        continue;
    return ch;
}
int main()
{
    int ch;
    ch = get_first();
    printf("%c",ch);
}
