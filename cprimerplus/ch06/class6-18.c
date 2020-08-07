#include <stdio.h>
int main()
{
    const int ROWS = 6, CHARS = 6;
    int n;
    char a;
    for (n = 0;n < ROWS; n++)
    {
        for (a = ('A' + n); a < ('A' + CHARS); a++)
            printf("%c",a);
            printf("\n");
    }
    return 0;
}
