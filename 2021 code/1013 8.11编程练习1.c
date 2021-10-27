//Date:20211013
//Author:106APrimer
//设计一个程序，统计在读到文件结尾之前读取的字符数。
#include <stdio.h>
int main(void)
{
    int ch;
    int n = 0;
    while ((ch = getchar()) != EOF) 
       n++;
    printf("There are %d characters.\n", n);
    return 0;
}