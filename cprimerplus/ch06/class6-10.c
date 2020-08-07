#include <stdio.h>
int main()
{
    int up,low,sum,low2;
    printf("Enter lower and upper inter limits: ");
    scanf("%d %d",&low,&up);
    while (up > low) {
        low2 = low;
        sum = 0;
        while(up >= low){
             sum += low*low;
             low++;}
        printf("The sums of squares from %d to %d is %d\n",low2*low2,up*up,sum);
        printf("Enter next set of limits: ");
        scanf("%d %d",&low,&up);
    }
    printf("Done");
    return 0;
}
