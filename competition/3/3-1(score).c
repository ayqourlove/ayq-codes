#include <stdio.h>
int main()
{
    char ch, a = 0, s = 0;
    while ((ch = getchar()) != EOF)
    {
        if(ch == 'O')
        {
            a++;
            s += a;
            continue;
        }
        else
            a = 0;
    }
    printf("%d", s);
    return 0;
}
