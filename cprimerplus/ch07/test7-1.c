#include <stdio.h>
int main()
{
    int s,c,n;
    char ch;
    s = c = n = 0;
    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
            s++;
        if (ch == '\n')
            c++;
        else n++;
    }
    printf("square = %d, change = %d, other = %d",s,c,n);
    return 0;

}
