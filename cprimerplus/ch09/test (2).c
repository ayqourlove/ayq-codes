#include <stdio.h>
void printf_char(char ch, int i, int j);
int main()
{
    char ch;
    int i, j;
    scanf("%c %d %d", &ch, &j, &i);
    printf_char( ch, i, j);
    return 0;
}

void printf_char(char ch, int i, int j)
{
    int line, arrange;
    for (line = 0; line < j; line++)
    {
        for (arrange = 0; arrange < i; arrange++)
            printf("%c",ch);
        printf("\n");
    }
}
