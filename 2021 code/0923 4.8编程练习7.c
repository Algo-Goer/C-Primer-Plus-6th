#include <stdio.h>
#include <float.h>
int main(void) 
{
    float v1 = 1.0/3.0;
    double v2 = 1.0/3.0;
    printf("%.6f\n", v1);
    printf("%.12f\n", v1);
    printf("%.16f\n", v1);
    printf("%.6f\n", v2);
    printf("%.12f\n", v2);
    printf("%.16f\n", v2);
    printf("\nfloat与double类型最大有效位数分别是：\n");
    printf("FLT_DIG = %d, DBL_DIG = %d\n", FLT_DIG, DBL_DIG);//FLT_DIG表示float有效十进制数字位数,DBL_DIG表示double有效十进制数字位数；
    return 0;
}