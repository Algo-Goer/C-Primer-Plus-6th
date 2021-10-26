//floatcnv.c -- 不匹配的浮点型转换
#include <stdio.h>
int main(void) 
{
    float n1 = 3.0f;
    double n2 = 3.0f;
    long n3 = 2000000000;
    long n4 = 1234567890;
    printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);
    printf("%ld %ld\n", n3, n4);
    printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);
    return 0;
}