#include <stdio.h>

int main()
{
    char name[40] = "guo";
    float price = 123.45;
    printf("The %s family just may be $%.2f dollars richer!",name,price);
    return 0;
}
//完美！直接打%s会直接适应字符串大小输出！
