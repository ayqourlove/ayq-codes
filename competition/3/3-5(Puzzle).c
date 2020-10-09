#include <stdio.h>
char s[10][10];
char order[99];
int main()
{
    printf("enter the square:\n");
    int r0, c0;
    for (int r = 1; r <= 5; r++)
        for (int c = 1; c <= 6; c++)
        {
            scanf("%c", &s[r][c]);
            if (s[r][c] == ' ')
            {
                r0 = r;
                c0 = c;
            }
        }
    printf("enter the order:");
    char ch;
    int j = 1;
    int k = -1;
    int count = -1;
    while ((ch = getchar()) != '0')
    {
        if(ch == 'A' || ch == 'B' || ch == 'L' || ch == 'R')
        {
            order[++k] = ch;
            count++;
        }
        else
        {
            j = 0;
        }
    }
    if (j == 0)
         printf("This puzzle has no final configuration");
    else
    {
        for (int n = 0; n <= count; n++)
        {
            switch(order[n])
            {
                case 'A':
                    s[r0][c0] = s[r0 - 1][c0];
                    s[r0 - 1][c0] = ' ';
                    r0 -= 1;
                    break;
                case 'B':
                    s[r0][c0] = s[r0 + 1][c0];
                    s[r0 + 1][c0] = ' ';
                    r0 += 1;
                    break;
                case 'R':
                    s[r0][c0] = s[r0][c0 + 1];
                    s[r0][c0 + 1] = ' ';
                    c0 += 1;
                    break;
                case 'L':
                    s[r0][c0] = s[r0][c0 - 1];
                    s[r0][c0 - 1] = ' ';
                    c0 -= 1;
                    break;
            }
        }
        for (int r = 1; r <= 5; r++)
            for (int c = 1; c <= 6; c++)
                printf("%c", s[r][c]);
    }
    return 0;
}

