#include <stdio.h>
int main()
{
    int f, l;
    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d",&l);
    printf("Now enter the firsr operand: ");
    scanf("%d",&f);
    while(f > 0) {
        printf("%d %% %d is %d\n", f, l, f % l);
        printf("Enter the next number for first operand (<=0 to quit): ");
        scanf("%d",&gf);
    }
    printf("Done!");
    return 0;
}
