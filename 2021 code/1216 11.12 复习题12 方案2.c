/* 
第2种方案，可以放置函数修改字符串，但是允许使用返回值改变字符串。
表达式(char *)string被称为“通过强制类型转换取消const”
*/
#include <stdio.h>
char * strblk(const char * string)
{
    while (*string != ' ' && *string != '\0')
      string++;  // 在第1个空白或空字符处停止
      // 为什么是或？
    if (*string == '\0')
      return NULL;  
    else
      return (char *)string;
}