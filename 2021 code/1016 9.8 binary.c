//binary.c -- 以二进制的形式打印整数
#include <stdio.h>
void to_binary(unsigned long n);
int main(void)
{
    unsigned long number;
    printf("Enter an integer ( q to quit ):\n");
    while (scanf("%lu", &number) == 1)
    {
        printf("Binary equivalent: %lu\n", number);
        to_binary(number);
        putchar('\n');
        printf("Enter an integer ( q to quit ):\n");
    }
    printf("Done.\n");
    return 0;
}
void to_binary(unsigned long n)  //递归函数
{
    int r;
    r = n % 2;
    if (n >= 2)
      to_binary(n / 2);
    putchar(r == 0 ? '0' : '1');  //把数值转化为字符
    return;
}