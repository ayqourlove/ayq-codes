#include <stdio.h>
#include <ctype.h>
int _char(char ch)
{
    int _return;
    _return = ch;
    if (iswupper(ch))
            _return -= 64;
    else if (iswlower(ch))
            _return -= 96;
    else _return = -1;
    return _return;
}

int main()
{
    char ch;
    int j;
    while ((ch = getchar()) != EOF)
    {
        j = _char(ch);
        if (j != -1)
            printf("  %c is a letter, the position of %c is %d\n", ch, ch, j);
        else
            printf("%c is not a letter\n", ch);
    }
    return 0;
}
