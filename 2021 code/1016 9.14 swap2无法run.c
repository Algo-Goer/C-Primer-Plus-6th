//swap2.c -- 查找swap1.c的问题
//虽然新增但无法run的原因：只能改变x，y没变。用return语句只能把被调函数中的一个值传回主调函数，但现在要传回两个值。必须用指针。见9.15
#include <stdio.h>
void interchange(int u, int v);  //声明函数
int main(void) 
{
    int x = 5, y = 10;
    printf("Originally x = %d and y = %d.\n", x, y);
    x = interchange(x, y);  //新增
    printf("Now x = %d and y = %d.\n", x, y);
    return 0;
}
void interchange(int u, int v) //定义函数
{
    int temp;
    printf("Originally u = %d and v = %d.\n", u, v);
    temp = u;
    u = v;
    v = temp;
    printf("Now u = %d and v = %d.\n", u, v);
    return (u);  //新增
}