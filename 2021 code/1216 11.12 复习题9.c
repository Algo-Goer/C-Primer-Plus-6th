// 改写s_gets()，用指针表示法代替数组表示法，减少一个变量i
#include <stdio.h>

char *s_gets(char *st, int n)
{
    char *ret_val;
    // int i = 0; 原来程序
    ret_val = fgets(st, n, stdin);
    if (ret_val) // 即ret_val != NULL
    {
        while (*st != '\n' && *st != '\0')
            // while (st[i] != '\n' && st[i] != '\0')
            st++;
        // i++;
        if (*st == '\n')
            // if (st[i] == '\n')
            *st = '\0';
        // st[i] = '\0';  // 如果字符串中出现换行符，就用空字符替换
        else
            while (getchar() != '\n') // 如果字符串中出现空字符，就丢弃输入行的其余字符，然后返回与fgets()相同值
                continue;
    }
    return ret_val;
}

/* 
11.10 s_gets()自定义函数
#include <stdio.h>

char *s_gets(char *st, int n)
{
    char *ret_val;
    int i = 0;
    ret_val = fgets(st, n, stdin);
    if (ret_val) // 即ret_val != NULL
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';  // 如果字符串中出现换行符，就用空字符替换
        else
            while (getchar() != '\n')  // 如果字符串中出现空字符，就丢弃输入行的其余字符，然后返回与fgets()相同值
                continue;
    }
    return ret_val;
}
*/