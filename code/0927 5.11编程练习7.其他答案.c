#include <stdio.h>
void cube(float n);
int main(void)
{
    float num;
    printf("请输入一个浮点数：\n");
    scanf("%f", &num);
    cube(num);
    return 0;
}

void cube(float n)
{
    printf("%.2f的立方是：%.2f\n", n, n * n * n);
}