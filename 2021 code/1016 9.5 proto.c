//misuse.c -- 用过去声明函数的方式声明imax()函数，然后错误使用函数
#include <stdio.h>
int imax(int, int);  //旧式函数声明，没有给出函数的参数个数和类型。因此如果调用函数时使用的参数个数不对或类型不匹配，编译器根本不会察觉
int main(void) 
{
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3, 5));  //第一次调用时省略了imax()的一个参数
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));//第二次调用时用两个浮点参数而非整数参数
    return 0;
}
int imax(int n, int m)
{
    return (n > m ? n : m);  //输出错误的结果，是因为运行的程序没有使用函数原型
}