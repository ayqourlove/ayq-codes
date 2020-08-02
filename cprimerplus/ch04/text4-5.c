#include <stdio.h>
int main()
{
    float size,speed,time;
    printf("Please enter the size of the file,use Mb: ");
    scanf("%f",&size);
    printf("Please enter the downlord speed,use Mb/s: ");
    scanf("%f",&speed);
    time = size / speed;
    printf("At %.2f megabits per second,a file of %.2f megabytes\n\
downlords in %.2f seconds.",speed,size,time);
    return 0;

}
