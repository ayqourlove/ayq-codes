#include <stdio.h>
int main()
{
    float cm, inc;
    int feet;
    printf("Enter a height in centimeters: ");
    scanf("%f",&cm);
    while (cm > 0) {
        inc = cm / 2.54;
        feet = (int)inc / 12;
        printf("%.1f cm = %d feet, %.1f inches\n"
               "Enter a height in centimeters (<=0 to quit): ", cm, feet, inc - feet * 12);
        scanf("%f",&cm);
    }
    printf("bye");
    return 0;
}
