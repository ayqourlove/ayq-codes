#include <stdio.h>
int main()
{
    int count = 1, i = 1;
    i = i++;
    printf("%d %d %d\n",  ++count, ++count, ++count);
    printf("%d", i);
    return 0;
}
