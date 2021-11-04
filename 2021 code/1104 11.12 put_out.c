#include <stdio.h>
#define DEF "I am a #defined string."
int main(void)
{
    char str1[80] = "An array was initialized to me.";  // 存储字符串的数组名是地址
    const char * str2 = "A pointer was initialized to me.";
    puts("I'm an argument to puts().");  // 用双引号括起来的内容是字符串常量，且被视为该字符串的地址
    puts(DEF);
    puts(str1);   // puts()在显示字符串时会自动在其末尾添加一个换行符
    puts(str2);
    puts(&str1[5]);    // 表达式&str1[5]是str1数组的第6个元素(r),puts()从该元素开始输出
    puts(str2 + 4);    // puts()函数在遇到空字符时就停止输出，所以必须确保有空字符
    return 0;
}