#include <stdio.h>
int main()
{
    const float change1 = 3.785,change2 = 1.609;
    float mileage,gallon,Hkilometer,litre;//Hkilometer代表100公里
    printf("请输入旅行的里程：");
    scanf("%f",&mileage);
    printf("请输入消耗汽油的加仑数：");
    scanf("%f",&gallon);
    printf("消耗每加仑汽油行驶的英里数为%.1f\n",mileage/gallon);
    Hkilometer = mileage * change2/100,
    litre = gallon * change1;
    printf("行驶每百公里数消耗的汽油升数为%.1f",litre/Hkilometer);
    return 0;

}
