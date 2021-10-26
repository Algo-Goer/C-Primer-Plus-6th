/*
    8、第6章的程序清单6.20中，power()函数返回一个double类型数的正整数的次幂。
    改进该函数使其能正确计算负幂。另外，函数要处理0的任何次幂都是0，
    任何数的0次幂都为1。要使用一个循环，并在程序中测试该函数。
*/

#include <stdio.h>

double power(double n, int p);  //ANSI原型

int main(int argc, char const *argv[])
{
    double x, xpow;
    int exp;

    printf("Enter a number and the positive integer power");
    printf(" to which\nthe number will be raised. Enter q");
    printf(" to quit.\n");

    while ( scanf("%lf %d", &x, &exp))
    {
        xpow = power(x, exp);   //函数调用
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip -- bye!\n");
    
    return 0;
}

double power(double n, int p)   //函数定义
{
    double pow = 1; //使用1.0来接受计算次幂的总数，且当幂为0时，直接返回1；

    if ( p > 0) //当递归中的p小于0时返回
    {
        pow *= n * power(n, p - 1);
    }else if ( p < 0)//当递归中的p大于0时返回
    {
        pow *= (1.0 / n) * power(n, p + 1);
    }else if ( n == 0 )
    {
        pow = 0;
    }

    return pow;                 //返回pow的值
}
