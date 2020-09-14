#include <stdio.h>
int main()
{
   int ch,c;
   c = 0;
   while((ch = getchar()) != EOF)
   {
       c++;
   }
   printf("\n%d characters",c);
   return 0;
}
