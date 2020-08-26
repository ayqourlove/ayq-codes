#include <stdio.h>

int main()
{
    char ch;
    int i,n;
    i = n = 0;
    while ((ch = getchar()) != '#')
    {
        if(ch == 'e')
        {
            i = 1;
        }
        if(ch == 'i' && i == 1)
        {
            i = 0;
            n++;
        }
    }
    printf("n = %d",n);
    return 0;
}
