#include <stdio.h>
int main(void)
{
    int kuaTuo;
    float zhiLiang;
    float keshu = 950;
    zhiLiang = 3.0E-23;
    printf("请输入水的夸脱数：");
    scanf("%d", &kuaTuo);
    printf("水分子的数量大约为%E.\n", kuaTuo * keshu/zhiLiang);

    return 0;

}