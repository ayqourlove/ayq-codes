#include <stdio.h>
#define CH 60
int main()
{
    int min;
    printf("This program converts min to hour and min.\n");
    printf("Please enter the min (when the number <= 0,the program close).\n");
    scanf("%d",&min);
    while(min > 0) {
        printf("%d min is %d hour and %d min\n",min, min / CH, min & CH);
        scanf("%d",&min);
    }
    printf("Done!");
    return 0;
}
