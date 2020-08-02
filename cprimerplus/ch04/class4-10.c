#include <stdio.h>
#define BLURE "Authentic imitation!"

int main()
{
    printf("[%2s]\n",BLURE);
    printf("[%24s]\n",BLURE);
    printf("[%24.5s]\n",BLURE);
    printf("[%-24.5s]",BLURE);
    return 0;
}
