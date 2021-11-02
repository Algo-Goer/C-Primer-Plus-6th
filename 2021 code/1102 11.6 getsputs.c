/* 
gets()函数读取整行输入，直至遇到换行符，然后丢弃换行符，存储其余字符，并在这些字符末尾添加一个空字符
使其成为一个C字符串
gets()经常和puts()函数配对使用，用于显示字符串，并在末尾添加换行符
*/
#include <stdio.h>
#define STLEN 81
int main(void)
{
    char words[STLEN];
    puts("Enter a string, please.");
    gets(words); // 典型用法，整行输入（除了换行符）都被存储在words中
    printf("Your string twice:\n");
    printf("%s\n", words);
    puts(words);   // puts(words)和printf("%s\n", words);效果相同
    puts("Done.");
    return 0;
}
