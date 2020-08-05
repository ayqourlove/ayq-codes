#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,x1,x2;
    scanf("%f %f %f",&a,&b,&c);
    if (a != 0 && (b*b-4*a*c) >= 0)
    {
    x1 = (-b+sqrt(b*b-4*a*c)) / (2*a);
    x2 = (-b-sqrt(b*b-4*a*c)) / (2*a);
    if(a>0){
        printf("%.2f %.2f",x1,x2);
    }
    if(a<0){
        printf("%.2f %.2f",x2,x1);
    }
    }
    return 0;
}
