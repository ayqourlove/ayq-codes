#include <stdio.h>//
#define SIZE 10
#define PAR 72
int main()
{
    int index, scores[SIZE];
    int sum = 0;
    float average;
    printf("Enter ten scores: \n");
    for (index = 0; index < SIZE; index++)
        scanf("%d",&scores[index]);
    printf("Check the scores: ");
    for (index = 0; index < SIZE; index++)
        printf("%d ",scores[index]);
    for (index = 0; index < SIZE; index++)
        sum += scores[index];
    average = (float)sum / SIZE;
    printf("The total scores is %d.\nthe average is %.2f.\n"
           "the handicap is %.2f", sum, average, average - PAR);
    return 0;
}
