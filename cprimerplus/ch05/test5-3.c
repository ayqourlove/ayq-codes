#include <stdio.h>
int main()
{
    int day;
    printf("Please enter  the amount of the days:\n");
    scanf("%d",&day);
    while(day > 0) {
        printf("%d days are %d weeks, %d days.\n",day, day / 7,day % 7);
        scanf("%d",&day);
    }
    printf("Done!");
    return 0;
}
