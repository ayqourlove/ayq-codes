#include <stdio.h>
#include <float.h>
int main()
{
    double k1;
    float k2;
    k1 = 1.0 / 3.0,k2 = 1.0 / 3.0;
    printf("С�������λ��k1 k2:\n%.6f %.6f\n",k1,k2);
    printf("��ʮ��λ��k1 k2:\n%.12f %.12f\n",k1,k2);
    printf("��ʮ��λ��k1 k2:\n%.16f %.16f\n",k1,k2);
    printf("FLT_DIG:%d\n",FLT_DIG);
    printf("DBL_DIG:%d\n",DBL_DIG);
    return 0;

}
