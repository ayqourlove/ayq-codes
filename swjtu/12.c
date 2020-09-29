#include <stdio.h>
int main()
{
    int chars[26], ch;
    char cha;
    for (ch = 0; ch <= 25; ch++)
        chars[ch] = 0;
    while((ch = getchar()) != '\n')
    {
        if (ch < 97 || ch > 122)
            continue;
        else
        {
            ch = ch - 97;
            chars[ch]++;
        }
    }
    for (ch = 0;ch <= 25; ch++)
    {
        if (chars[ch] == 0)
            continue;
        cha = ch + 97;
        printf("%c=%d\n", cha, chars[ch]);
    }
    return 0;
}
