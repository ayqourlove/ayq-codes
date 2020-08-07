#include <stdio.h>
int main()
{
    char s[26];
    int n;
    for(n = 0, s[0] = 'a';n < 26;n++)
            s[n] = s[0] + n;
    for(n = 0; n < 26;n++)
        printf("%c",s[n]);
    return 0;
}
