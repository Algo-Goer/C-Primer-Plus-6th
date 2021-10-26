//尾递归 tail recursion
//递归在函数末尾。尾递归是最简单的递归形式，因为它相当于循环
//0的阶乘等于1，负数没有阶乘
//第1个函数使用for循环计算阶乘，第2个函数使用递归计算阶乘
//factor.c -- 使用循环和递归计算阶乘
#include <stdio.h>
long fact(int n);
long rfact(int n);
int main(void)
{
    int num;
    printf("This program calculates factorials.\n");
    printf("Enter a value in the range 0-12 ( q to quit ):\n");
    while (scanf("%d", &num) == 1)
    {
        if (num < 0)
           printf("No negative numbers, please.\n");
        else if (num > 12)
           printf("Keep input under 13.\n");
        else
        {
            printf("loop: %d factorial = %ld\n", num, fact(num));
            printf("recursion: %d factorial = %ld\n", num, rfact(num));
        }
        printf("Enter a value in the range 0-12 ( q to quit ):\n");
    }
    printf("Bye.\n");
    return 0;
}
long fact(int n)   //使用循环的函数
{
    long ans;
    for (ans = 1; n > 1; n--)
        ans *= n;
    return ans;
}
long rfact(int n)  //使用递归的函数
{
    long ans;
    if (n > 0)
       ans = n * rfact(n - 1);
    else
       ans = 1;
    return ans;
}