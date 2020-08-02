#include <stdio.h>
int main()
{
    float num;
    printf("Please enter the number\n");
    scanf("%f",&num);
    printf("\nThe input is %0.1f or %.1e\n",num,num);
    printf("The input is %+0.3f or %0.3E",num,num);
    return 0;

}
