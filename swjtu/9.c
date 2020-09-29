#include <stdio.h>
int main()
{
    float faHeight, moHeight,yourHeight;
    char sex, sports, habit;
    printf("Are you a boy(M) or a girl(F)?");
    scanf("%c", &sex);
    printf("Please input your father's height(cm):");
    scanf("%f", &faHeight);
    printf("Please input your mother's height(cm):");
    scanf("%f", &moHeight);
    getchar();
    printf("Do you like sports(Y/N)?");
    scanf("%c", &sports);
    getchar();
    printf("Do you have a good habit of diet(Y/N)?");
    scanf("%c", &habit);
    if (sex == 'M')
        yourHeight = (faHeight + moHeight) * 0.54;
    else
        yourHeight = (faHeight * 0.923 + moHeight) / 2;
    if (sports == 'Y')
        yourHeight += yourHeight * 0.02;
    if (habit == 'Y')
        yourHeight += yourHeight * 0.015;
    printf("Your future height will be %.0f(cm)", yourHeight);
    return 0;
}
