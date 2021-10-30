#include <stdio.h>
#define MSG "I am a symbolic string constant."  // 字符串常量--定义字符串
#define MAXLENGTH 81
int main(void)
{
    char words[MAXLENGTH] = "I am a string in an array.";
    const char * pt1 = "Something is pointing at me.";
    puts("Here are some strings:");
    puts(MSG); // puts函数也属于stdio.h系列的输入输出函数。但puts()只显示字符串，而且自动在末尾加换行符
    puts(words); // char类型数组--定义字符串
    puts(pt1);   //  指向char的指针--定义字符串
    words[8] = 'p';
    puts(words);
    return 0;
}
