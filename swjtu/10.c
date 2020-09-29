#include <stdio.h>
int main()
{
    int chars = 0, lines = 0;
    char ch;
    while((ch = getchar()) != EOF)
    {
        chars++;
        if (ch == '\n')
            lines++;
    }
    printf("chars=%d, lines=%d\n", chars,lines);
    return 0;
}
