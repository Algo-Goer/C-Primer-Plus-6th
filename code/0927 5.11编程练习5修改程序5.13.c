#include <stdio.h>
int main(void)
{
    int days, count, sum; //声明
    printf("How many days did you earn:\n");
    scanf("%d", &days);
    sum = 0; //表达式语句
    count = 0;
    while (count++ < days)  //迭代语句
    {
        sum = sum + count;
    }     
    printf("sum = %d\n", sum);
    return 0; //跳转语句
}