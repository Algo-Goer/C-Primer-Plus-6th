// 把用户的响应与已存储的字符串作比较
// 该程序是否能正常运行？
#include <stdio.h>
#define ANSWER "Grant" // ANSWER和try都是指针
#define SIZE 40
char *s_gets(char *st, int n);
int main(void)
{
    char try[SIZE];
    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);
    while (try != ANSWER) 
    /*
    ANSWER和try都是指针。该句检查的不是两个字符串是否相等，而是这两个字符串的地址是否相等
    因为ANSWER和try存储在不同位置，所以这两个地址不可能相同。因此，无论用户输入什么
    程序都提示输入不正确
    该函数要比较的是字符串内容而非地址。可以用C标准库中的strcmp()函数（用于字符串比较）
    该函数通过比较运算符来比较字符串，就像比较数字一样
    如果两个字符串参数相同，该函数就返回0，否则返回非0.修改后版本见11.21.c
    */
    {
        puts("No, that's wrong. Try again.");
        s_gets(try, SIZE);
    }
    puts("That's right!");
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