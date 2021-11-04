// 打印一个字符串，并统计打印的字符数
#include <stdio.h>
int put2(const char *string)
{
    int count = 0;
    while (*string) // 常规用法  当string指向空字符时，*string值为0，即测试条件为假，while循环结束
    {
        putchar(*string++);
        count++;
    }
    putchar('\n'); // 不统计换行符
    return (count);
}