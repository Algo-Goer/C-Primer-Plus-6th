#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int age ;
    float ageMinutes;
    printf("请输入你的年龄：");
    scanf("%d", &age);
    ageMinutes = age * 3.156E7;
    printf("年龄对应的秒数为：%f\n", ageMinutes);
    printf("年龄对应的秒数为：%e\n", ageMinutes);

    return 0;
}