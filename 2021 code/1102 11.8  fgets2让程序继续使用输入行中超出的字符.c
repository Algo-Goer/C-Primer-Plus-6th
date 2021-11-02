// 使用fgets()和fputs()
// 如果输入太长，超过数组可容纳的字符数时，fgets()函数最容易使用。让程序继续使用输入行中超出的字符
#include <stdio.h>
#define STLEN 10
int main(void)
{
    char words[STLEN];
    puts("Enter strings (empty line to quit): ");
    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
        fputs(words, stdout);
    puts("Done.");
    return 0;          
}