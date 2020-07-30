#include <stdio.h>
int main()
{
    char name[40];
    printf("Please enter your name:\n");
    scanf("%s",name);
    printf("\"%s\"\n",name);
    printf("\"%20s\"\n",name);
    printf("\"%-20s\"\n",name);
    return 0;
}
