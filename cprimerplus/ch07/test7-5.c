#include <stdio.h>

int main()
{
    char ch;
    int n = 0;
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case '.':
            ch -= 13;
            putchar(ch);
            n++;
            break;
        case '!':
            putchar(ch);
            n++;
            putchar(ch);
            break;
        default:
            putchar(ch);
        }
    }
    printf("\nchange times = %d",n);
    return 0;
}
