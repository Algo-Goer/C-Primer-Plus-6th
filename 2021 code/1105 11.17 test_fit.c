// string.h头文件中包含了C字符串函数系列的原型
// 测试了fit()。使用缩短字符串长度的函数。使用了C字符串常量的串联特性。
#include <stdio.h>
#include <string.h> // 内含字符串函数原型
void fit(char *, unsigned int);
int main(void)
{
    char mesg[] = "Things should be as simple as possible,"
                  "but not simpler.";
    puts(mesg);
    fit(mesg, 38);
    puts(mesg);  
    puts("Lets's look at some more of the string.");
    puts(mesg + 39);   // mesg[39]的地址，该地址上存储的是空格字符，所以puts()显示该字符并继续输出直至遇到原来字符串中的空字符
    return 0;
}
void fit(char *string, unsigned int size)
{
    if (strlen(string) > size)
        string[size] = '\0';   // fit()函数把第39个元素的逗号替换成'\0'
}