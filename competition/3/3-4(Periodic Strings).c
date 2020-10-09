#include <stdio.h>
#include <string.h>
char c[90];
int k[90];
char t[90];
int main()
{
    char ch, och;
    int n = 0;
    while ((ch = getchar()) != EOF)
    {
        c[n++] = ch;
    }
    och = c[0];
    memset(k, 0, sizeof(k));
    int i = 0;
    for(n = 1; n <= strlen(c); n++)
        if(och = c[n])
            k[i++] = n;
    do
    {

    }
}
