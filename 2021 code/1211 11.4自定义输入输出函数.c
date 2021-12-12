// 测试一下put1()和put2()，并和其他打印的库函数做比较
#include <stdio.h> 
void put1(const char *string); 
int put2(const char *string);
 
int main(void) 
{
    int num = 0;
    put1("pizza");   // 自定义，不加换行符
    putchar("pizza");  // 库函数，自动加换行符
    puts("pizza");     // 库函数，自动加换行符
    num = put2("pizza");
    printf("%d\n", num);
}

void put1(const char *string)    // 打印字符串，不添加\n
{
    while (*string != '\0')
        putchar(*string++);
}

int put2(const char *string)     // 打印一个字符串，并统计打印的字符数
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