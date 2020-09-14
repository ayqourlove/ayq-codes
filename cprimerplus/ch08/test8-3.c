#include<stdio.h>
#include<ctype.h>
int main()
{
    int ch, k1 = 0, k2 = 0;
    while((ch = getchar()) != EOF)
    {

        if(isupper(ch))
        k1++;
        if(islower(ch))
        k2++;
    }
    printf("upper = %d, lower = %d",k1,k2);
    return 0;
}
