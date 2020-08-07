#include <stdio.h>
int main()
{
    int n,c;
    for(n = 1,c = 5; c <= 150;n++) {
        c--;
        c *= 2;
        printf("The %dth week: %d friends.\n",n,c);
    }
    return 0;
}
