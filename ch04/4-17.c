#include <stdio.h>
int main()
{
    int n;
    printf("Please enter three intergers:\n");
    scanf("%*d %*d %d",&n);
    printf("The last interger was %d",n);
    return 0;
}
