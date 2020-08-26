#include <stdio.h>
int main()
{
    int n,j;
    j = 0;
    char ch;
    while ((ch = getchar()) != '#')
    {
        switch (j)
        {
        case 0:
        {
            printf("%c-%d ",ch,ch);
            if (ch < 100)
                j = 1;
        } break;
        case 1:
        {
            printf(" %c-%d ",ch,ch);
            if (ch > 100)
                j = 0;
        } break;
        }
        n++;
        if (n%8 == 0)
        {
            printf("\b\n");
            j = 0;
        }
    }
    return 0;
}
