#include <stdio.h>
#define addtiontime 1.5
#define l300 0.15
#define m150 0.2
#define rest 0.25

int main()
{
    char cho;
    float base;
    do
    {
        printf("****************************************************************\n");
        printf("Enter the number corrsponding to the desired pay rate or action:\n");
        printf("a) $8.75/hr                       b) $9.33/hr\n");
        printf("c) $10.00/hr                      d) $11.20/hr\n");
        printf("e) quit.\n");
        printf("****************************************************************\n");
        cho = getchar();
        if (cho == 'e')
        {
            while(getchar() != '\n')
                continue;
            break;
        }
        if (cho == 'a'|| cho == 'b' || cho == 'c' || cho == 'd')
        {
            switch(cho)
            {
                case 'a': base = 8.75;
                break;
                case 'b': base = 9.33;
                break;
                case 'c': base = 10.00;
                break;
                case 'd': base = 11.20;
                break;
            }
            float hours,all,tax,gets;
            printf("enter your work hours:");
            scanf("%f",&hours);
            if (hours >= 40)
                hours = 40 + addtiontime * (hours - 40);
            all = hours * base;
            if (all <= 300)
                tax = l300 * all;
            if (all > 300 && all <= 450)
                tax = 45 + m150 * (all - 300);
            if (all > 450)
                tax = 75 + rest * (all - 450);
            gets = all - tax;
            printf("all = %.2f$, tax = %.2f$, gets = %.2f$\n\n",all,tax,gets);
            while(getchar() != '\n')
            continue;
            continue;
        }
        else
        {
            printf("\nyou enter a worong character! Enter again:\n");
            while(getchar() != '\n')
                continue;
            continue;
        }
    }
    while (1);
    printf("Done!");
    return 0;
}
