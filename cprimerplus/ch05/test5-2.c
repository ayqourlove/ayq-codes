#include <stdio.h>
const int ten = 10;
int main()
{
    int k,x;
    printf("Please denter a number:");
    scanf("%d",&k);
    x = k;
    while(x <= k + ten) {
        printf("%d\n",x);
        x++;
    }
    return 0;
}
