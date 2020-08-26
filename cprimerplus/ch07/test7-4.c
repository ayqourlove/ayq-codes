#include <stdio.h>

int main()
{
    char ch;
    int n = 0;
    while ((ch = getchar()) != '#')
    {
        if (ch == '!')
        {
            putchar(ch);
            n++;
            putchar(ch);
        }
        else if (ch == '!')
        {
            ch -= 13;
            n++;
            putchar(ch);
        }
        else
            putchar(ch);

    }
    printf("\nchang times = %d",n);
    return 0;
}
