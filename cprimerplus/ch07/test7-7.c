#include <stdio.h>
#define addtiontime 1.5
#define l300 0.15
#define m150 0.2
#define rest 0.25

int main()
{
    int cho;
    float base;
    printf("****************************************************************\n");
    printf("Enter the number corrsponding to the desired pay rate or action:\n");
    printf("1) $8.75/hr                       2) $9.33/hr\n");
    printf("3) $10.00/hr                      4) $11.20/hr\n");
    printf("5) quit.\n");
    printf("****************************************************************\n");
    scanf ("%d",&cho);
    while (cho != 5)
    {
        if (cho == 1 || cho == 2 || cho == 3 || cho == 4)
        {
        switch(cho)
        {
            case 1: base = 8.75;
            break;
            case 2: base = 9.33;
            break;
            case 3: base = 10.00;
            break;
            case 4: base = 11.20;
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
    printf("choose again:\n");
     printf("****************************************************************\n");
    printf("Enter the number corrsponding to the desired pay rate or action:\n");
    printf("1) $8.75/hr                       2) $9.33/hr\n");
    printf("3) $10.00/hr                      4) $11.20/hr\n");
    printf("5) quit.\n");
    printf("****************************************************************\n");
    scanf("%d",&cho);
        }
        else
        {
            printf("\nyou enter worong number! Enter again:\n");
             printf("****************************************************************\n");
    printf("Enter the number corrsponding to the desired pay rate or action:\n");
    printf("1) $8.75/hr                       2) $9.33/hr\n");
    printf("3) $10.00/hr                      4) $11.20/hr\n");
    printf("5) quit.\n");
    printf("****************************************************************\n");
    scanf("%d",&cho);
        }
    }
    printf("Done!");
    return 0;
}











