//power.c -- 计算数的整数幂
#include <stdio.h>
double power(double n, int p);  // ANSI函数原型，这是power()函数的原型，它声明程序将使用一个名为power()
//的函数。开头的关键字double表明power()函数返回一个double类型的值。
//编译器要知道power()函数返回值的类型，才能知道有多少字节的数据，以及如何解释它们。这就是必须声明函数的原因。
int main(void) 
{
    double x, xpow;
    int exp;
    printf("Enter a number and the positive integer power");
    printf(" to which\nthe number will be raised. Enter q");
    printf(" to quit.\n");
    while (scanf("%lf%d", &x, &exp) == 2)
    {
        xpow = power(x, exp);  //函数调用。程序调用power()，把两个值传递给它，并把计算结果返回给主调函数。
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip -- bye!\n");
    return 0;
}

double power(double n, int p) //函数定义，这里power()有两个形参，一个是double类型，一个是int类型。
//函数定义的末尾没有分号，而函数原型的末尾有分号。
//无逗号，后面有花括号
{
    double pow = 1;
    int i;
    for (i = 1; i <= p; i++)//power()函数用for循环计算n的p次幂
         pow *= n;
    return pow;  //返回pow
}