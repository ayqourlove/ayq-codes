#include <stdio.h>

int main()
{
    float fcount;
    printf ("Enter a floating-point value: ");
    scanf("%f",&fcount);
    printf("\nfixed-point notation: %f",fcount);
    printf("\nexponential notation: %e",fcount);
    printf("\np notation: %a",fcount);
    return 0;
}
