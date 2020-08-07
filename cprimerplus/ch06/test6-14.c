#include <stdio.h>
int main()
{
    double s[8],sum[8];
    int i;
    scanf("%lf",&s[0]);
    sum[0] = s[0];
    for(i = 1; i < 8; i++) {
        scanf("%lf",&s[i]);
        sum[i] = sum[i-1] + s[i];}
    for(i = 0; i < 8; i++)
        printf("%5.1lf ",s[i]);
    printf("\n");
    for(i = 0; i < 8; i++)
        printf("%5.1lf ",sum[i]);
    return 0;
}
