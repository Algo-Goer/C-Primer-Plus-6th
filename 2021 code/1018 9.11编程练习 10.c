/*
 * @Author: 106APrimer
 * @Date: 2021-10-19 23:07:07
 * @LastEditTime: 2021-10-19 23:30:13
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \.vscode\C\1018 9.11编程练习 10.c
 */
//改编9.8 to_binary.c
//进制转化 递归
#include <stdio.h>
void to_base_n(unsigned long n, unsigned short x);
int main(void)
{
    unsigned long n;
    unsigned short x;
    printf("Enter a number and system :\n");
    while (~scanf("%lu %hu", &n, &x))
    {
        to_base_n(n, x);
        putchar('\n');
        printf("Enter a number and system :\n");
    }
    printf("Done.\n");
    return 0;
}
void to_base_n(unsigned long n, unsigned short x)
{
    int r;
    r = n % x;
    if (n >= x)
      to_base_n(n / x, x);
    printf("%d", r);  
    return;
}
/*
原代码（转化为二进制）：
    int r;
    r = n % 2;
    if (n >= 2)
      to_binary(n / 2);
    putchar(r == 0 ? '0' : '1');  //把数值转化为字符
    return;
*/