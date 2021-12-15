/* 设计一个函数，接受一个指向字符串的指针，返回指向该字符串第1个空格字符的指针，
或如果未找到空格字符，则返回空指针 */
#include <stdio.h> // 提供NULL的定义
char *strblk(char *string)
{
    while (*string != ' ' && *string != '\0')
        string++; // 在第1个空白或空字符处停止
    if (*string == '\0')
        return NULL; // NULL空指针
    else
        return string;
}