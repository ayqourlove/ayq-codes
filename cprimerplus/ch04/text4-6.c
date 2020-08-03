#include <stdio.h>
#include <string.h>
int main()
{
    char fname[40],lname[40];
    int k1,k2;
    printf("Please enter your first name: ");
    scanf("%s",fname);
    printf("Then enter your last name: ");
    scanf("%s",lname);
    printf("%s %s\n",fname,lname);
    k1 = strlen(fname),k2 = strlen(lname);
    printf("%*d %*d",k1,k1,k2,k2);
    return 0;
}
