#include <stdio.h>
void cube(float n); //函数原型
int main(void) 
{
    float num;
    printf("Please enter a number(double):\n");
    scanf("%f",&num);
    cube(num);
    return 0;
}

void cube(float n)   //函数定义
{
    printf("cube:%f", n * n *n);
}