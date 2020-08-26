#include <stdio.h>
#include <stdbool.h>
int main()
{
    unsigned long div,num;
    bool isPrime;
    printf("Please enter an integer for analyse : Enter q to quit.\n");
while (scanf("%lu",&num) == 1)
{
    for (div = 2,isPrime = true;(div*div) <= num;div++)
    {
        if (num % div == 0)
        {
            if (num*num != 0)
                printf("%lu is divisible by %lu and %lu\n",num,div,num/div);
            else
                printf("%lu is divisible by %lu.\n",num,div);
            isPrime = false;
        }
    }
    if (isPrime)
        printf("%lu is prime.\n",num);
    printf("Please enter anther inter for analyse; Enter q to quit.\n");
}
printf("Bye.\n");
return 0;
}
