#include <stdio.h>
int main()
{
    int guess = 50, low = 1, high = 100;
    int ch,cs;
    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\nI only search the first character.\n");
    printf("Un...is your number %d?\n", guess);
    while ((ch = getchar()) != 'y')
    {
        if (ch != 'n' && ch != '\n')
        {
            printf("Please enter 'y' or 'n':\n");
            while(getchar() != '\n')
                continue;
            continue;
        }
        while(getchar() != '\n')
            continue;
        printf("smaller(s) or biger(b), Enter 's' or 'b'?\n");
        while ((cs = getchar()) != 's' && cs != 'b')
        {
            printf("Please enter 's' or 'b':\n");
            while((cs = getchar()) != '\n')
               continue;
        }
        while(getchar() != '\n')
            continue;
        if (cs == 's')
            high = guess;
        if (cs == 'b')
            low = guess;
        guess = (low + high) / 2;
        printf("Is it %d? Enter 'y' or 'n':\n",guess);
    }
    printf("I know I guess right!\nBye!");
    return 0;
}
