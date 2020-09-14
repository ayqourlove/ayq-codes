#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main()
{
    int ch,words,chs,ave;
    words = chs = 0;
    bool jw = false;
    while((ch = getchar()) != EOF)
    {
       if (!isspace(ch) && !ispunct(ch))
        chs++;
       if (!isspace(ch) && !jw)
       {
           jw = true;
           words++;
       }
       if (isspace(ch) && jw)
        jw = false;
    }
    ave = chs / jw;
    printf("average = %d",ave);
    return 0;
}
