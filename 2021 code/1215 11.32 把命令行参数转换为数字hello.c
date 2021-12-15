// hello.c -- 把命令行参数转换为数字
// 终于在cmd运行了，把.exe文件放在C盘的xuebi文件夹下即可

#include <stdio.h>
#include <stdlib.h> 
// 从ANSI C开始，stdlib.h头文件中包含了atoi()函数原型
// system("pause");
int main(int argc, char *argv[])
{
    int i, times;

    if (argc < 2 || (times = atoi(argv[1])) < 1)
/* atoi()函数把命令行参数（例如3）被存储为字符串3\0
atoi()函数把该字符串转换为整数值3，然后赋给times。该值确定了执行for循环的次数。
如果运行该程序时没有提供命令行参数，那么argc<2为真，程序给出一条提示信息后结束。
如果times为0或负数也是如此。C语言逻辑运算符的求值顺序保证了如果argc<2，就不会对
atoi(argv[1])求值 */
/* 如果字符串仅以整数开头，atoi()函数也能处理，它只把开头的整数转换为字符。
例如atoi("42regular")将返回整数42。*/
        printf("Usage: %s positive-number\n", argv[0]);
    else
        for (i = 0; i < times; i++)
            puts("Hello, good looking!");
    
    system("pause");
    return 0;
}