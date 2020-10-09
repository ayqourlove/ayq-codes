#include <stdio.h>
#include <ctype.h>
#define C 12.01;
#define H 1.008;
#define O 16.00;
#define N 14.01;
int main()
{
    char ch;
    int fin = 0;
    double cha = 0,M = 0;
    while((ch = getchar()) != EOF)
    {
        switch(ch)
        {
            case 'C':
                M += C;
                cha = C;
                break;
            case 'H':
                M += H;
                cha = H;
                break;
            case 'O':
                M += O;
                cha = O;
                break;
            case 'N':
                M += N;
                cha = N;
                break;
            default:
                if (ch == '\n')
                    break;
                fin = ch - 48;
                M += (fin - 1) * cha;
        }
     }
     printf("%.3lf", M);
     return 0;
}
