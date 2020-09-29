#include <stdio.h>
int main()
{
    int y, m, d;
    printf("Enter a date(year month day):\n");
    scanf("%d%d%d", &y, &m, &d);
    printf("You enter the date: %02d/%02d/%d", m, d, y);
    return 0;
}
