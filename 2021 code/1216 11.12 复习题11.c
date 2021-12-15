// 用strchr()函数代替其中的while循环来查找换行符
#include <stdio.h>  // 提供fgets()和getchar()原型
#include <string.h> // 提供strchr()的原型

char *s_gets(char *st, int n)
{
    char *ret_val;
    char *find;
    // int i = 0;
    ret_val = fgets(st, n, stdin);
    if (ret_val) // 即ret_val != NULL
    {
        find = strchr(st, '\n'); // 查找换行符
        if (find)                // 如果地址不是NULL
            *find = '\0';        // 在此处放置一个空字符
        else
            while (getchar() != '\n')
                continue;
    }
    /* 
你把getchar()!='\n'看作一个函数，getchar()取得输入的字符，
如果这个字符不是换行符，那么返回值为1，
执行continue，即回到while继续这么干，
若执行遇到换行符，则退出整个while循环，这个换行符弃之不顾。
那么这整个语句的作用，应当是读取该行换行符前的所有字符吧。
*/

    return ret_val;
}

/*
fgets(words, STLEN, stdin);
fgets函数第2个参数指明了读入字符的最大数量。如果该参数值是n，那么fgets()将读入n-1个字符，或者
读到遇到的第一个换行符为止。
如果fgets()读到一个换行符，会把它存储在字符串中。这点与gets()不同，gets()会丢弃换行符。
fgets()函数的第3个参数指明要读入的文件。如果读入从键盘输入的数据，则以stdin(标准输入)作为参数，
该标识符定义在stdio.h中
*/

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