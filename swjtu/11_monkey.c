#include <stdio.h>
int main()
{
    int peach = 1,days = 0,i;
    while(days <= 0)
    {
        printf("Input days:\n");
        if (scanf("%d", &days) != 1)
            getchar();
    }
    for (i = 1; i < days; i++)
        peach = (peach + 1) * 2;
    printf("x=%d", peach);
    return 0;
}
