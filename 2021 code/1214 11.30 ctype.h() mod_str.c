// 修改字符串
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LIMIT 81
void ToUpper(char *);
int PunctCount(const char *);

int main(void)
{
    char line[LIMIT];
    char *find;

    puts("Please enter a line:");
    fgets(line, LIMIT, stdin);
    find = strchr(line, '\n'); // 读取一行输入查找换行符
    if (find)                  // 如果地址不是NULL
        *find = '\0';          // 用空字符替换
/* 该程序用fgets()和strchr()组合，读取一行输入并把换行符替换成空字符。
这种方法与使用s_gets()区别：s_gets()会处理输入行剩余字符（若有），
为下一次输入做好准备。而本例只有一条输入语句，就没必要进行多余步骤 */
    ToUpper(line);
    puts(line);
    printf("That line has %d punctuation characters.\n", PunctCount(line));
    return 0;
}

void ToUpper(char *str)
{
    while (*str) 
/* while (*str)循环处理str指向的字符串中的每个字符，直至遇到空字符。
此时*str值为0（空字符的编码值为0），即循环条件为假，循环结束。 */
    {
        *str = toupper(*str);
        str++;
    }
}

int PunctCount(const char *str)
{
    int ct = 0;
    while (*str)  
/* while (*str)循环处理str指向的字符串中的每个字符，
直至遇到空字符。此时*str值为0（空字符的编码值为0），即循环条件为假，循环结束。*/
    {
        if (ispunct(*str))
            ct++;
        str++;
    }

    return ct;
}