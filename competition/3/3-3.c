#include <stdio.h>
#include <string.h>
int s[15];
int main()
{
    char ch;
    memset(s, 0, sizeof(s));
    while ((ch = getchar()) != EOF)
    {
        s[ch - 48]++;
    }
    for(int i = 0; i <= 9; i++)
        printf("the count of %d = %d\n", i, s[i]);
    return 0;
}
