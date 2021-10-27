#include <stdio.h>
int main(void) 
{
    float yingCun;
    float height;
    float huanSuan = 2.54;
    printf("您的身高是多少英寸：");
    scanf("%f", &yingCun);
    height = yingCun * huanSuan;
    printf("那么您的身高是%.2f厘米", height);

    return 0;
}