// strcnvt.c -- 使用strtol()
/* 从ANSI C开始，stdlib.h头文件中包含了atoi()函数原型-把字符串转换为整数值。
除此之外，还包含了atof()和atol()函数的原型。
atof()函数把字符串转换成double类型的值，atol()函数把字符串转换成long类型的值。
atof()和atol()的工作原理和atoi()类似，因此它们分别返回double类型和long类型。

ANSI C还提供一套更智能的函数：
strtol()把字符串转换成long类型的值，strtoul()把字符串转换成unsigned long类型的值，
strtod()把字符串转换成double类型。
这些函数的智能之处在于识别和报告字符串中的首字符是否是数字。
而且，strtol()和strtoul()还可以指定数字的进制。 

strtol()函数原型：
```c
long strtol(const char * restrict nptr, char ** restrict endptr, int base);
```
这里,nptr是指向待转换字符串的指针，endptr是一个指针的地址，该指针被设置为标识
输入数字结束字符的地址，base表示以什么进制写入数字。 */

// 11.33 strcnvt.c -- 使用strtol()
#include <stdio.h>
#include <stdlib.h>
#define LIM 30
char *s_gets(char *st, int n);

int main()
{
    char number[LIM];
    char *end;
    long value;  // %ld 输出long整数

    puts("Enter a number (empty line to quit): ");
    while (s_gets(number, LIM) && number[0] != '\0')
    {
        value = strtol(number, &end, 10); // 十进制
        printf("base 10 input, base 10 output: %ld, stopped at %s (%d)\n", value, end, *end);
        value = strtol(number, &end, 16); // 十六进制
        printf("base 16 input, base 10 output: %ld, stopped at %s (%d)\n", value, end, *end);
        puts("Next number:"); 
/* 当base为16时,'a'字符被识别为一个有效的十六进制数，strtol()函数把十六进制数10a
转换成十进制数266 */
    }
    puts("Bye!\n");

    return 0;
}

char *s_gets(char *st, int n)
{
    char *ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}