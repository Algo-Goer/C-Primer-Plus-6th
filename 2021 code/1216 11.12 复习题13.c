/*
重写11.21.c，使用ctype.h头文件中的函数，以便无论用户选择大写还是小写，
该程序都能正确识别答案
*/

#include <stdio.h>
#include <string.h>   // fgets()
// strcmp()函数的原型在该头文件中，用于比较字符串，就像比较数字一样。相同返回0
#include <ctype.h>  // toupper()

#define ANSWER "GRANT"  // 改成了全大写
#define SIZE 40
char * s_gets(char * st, int n);
void ToUpper(char * str);  // 新增

int main(void)
{
    char try[SIZE];

    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);
    ToUpper(try);
    while (strcmp(try, ANSWER) != 0)  // strcmp()
    {
        puts("No, that's wrong. Try again.");
        s_gets(try, SIZE);
        ToUpper(try);
    }
    puts("That's right!");

    return 0;
}

void ToUpper(char * str)
{
    while (*str != '\0')
    {
        *str = toupper(*str);
        str++;
    }
}

char * s_gets(char * st, int n)
{
    char * ret_val;
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
                continue;  // 一旦有回车就跳出
    }
    return ret_val;
}

/*  
11.21 -- compare.c

#include <stdio.h>
#include <string.h> 
strcmp()函数的原型在该头文件中，用于比较字符串，就像比较数字一样。相同返回0

#define ANSWER "Grant"
#define SIZE 40
char * s_gets(char * st, int n);

int main(void)
{
    char try[SIZE];

    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);
    while (strcmp(try, ANSWER) != 0)  // strcmp()
    {
        puts("No, that's wrong. Try again.");
        s_gets(try, SIZE);
    }
    puts("That's right!");

    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
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
                continue;  // 一旦有回车就跳出
    }
    return ret_val;
}
*/