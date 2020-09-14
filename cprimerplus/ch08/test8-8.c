#include <stdio.h>
float get_number(void);
int main()
{
    int ch;
    float ff,sf;
    do
    {
        printf("Enter the operation of your choice:\n");
        printf("a. add           s. subtract\n");
        printf("m. multiply      d. divide\n");
        printf("q. quit\n");
        ch = getchar();
        while(getchar() != '\n')
            continue;
        if (ch == 'q')
            break;
        if (ch != 'a' && ch != 's' && ch != 'm' && ch != 'd')
        {
            printf("You enter worng!\n");
            while(getchar() != '\n')
                continue;
            continue;
        }
        printf("Enter first number: ");
        ff = get_number();
        printf("Enter second number: ");
        do
        {
            printf("Enter a number other than 0: ");
            sf = get_number();
        } while((sf == 0) && (ch = 'd'));
        if (ch == 'a')
        {
            printf("%g + %g = %g\n", ff, sf, ff + sf);
            continue;
        }
        if (ch == 's')
        {
            printf("%g - %g = %g\n", ff, sf, ff - sf);
            continue;
        }
        if (ch == 'm')
        {
            printf("%g * %g = %g\n", ff, sf, ff * sf);
            continue;
        }
        if (ch == 'd')
        {
            printf("%g / %g = %g\n", ff, sf, ff / sf);
            continue;
        }
    } while (1);
    printf("Bye.");
    return 0;
}
float get_number(void)
{
    float f;
    char c;
    while(scanf("%f",&f) != 1)
        {
            while((c = getchar()) != '\n')
                putchar(c);
            printf(" is not a number");
            printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
        }
    return f;
}
