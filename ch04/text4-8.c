#include <stdio.h>
int main()
{
    const float change1 = 3.785,change2 = 1.609;
    float mileage,gallon,Hkilometer,litre;//Hkilometer����100����
    printf("���������е���̣�");
    scanf("%f",&mileage);
    printf("�������������͵ļ�������");
    scanf("%f",&gallon);
    printf("����ÿ����������ʻ��Ӣ����Ϊ%.1f\n",mileage/gallon);
    Hkilometer = mileage * change2/100,
    litre = gallon * change1;
    printf("��ʻÿ�ٹ��������ĵ���������Ϊ%.1f",litre/Hkilometer);
    return 0;

}
