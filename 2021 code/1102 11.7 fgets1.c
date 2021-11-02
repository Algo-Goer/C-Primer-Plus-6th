/*
fgets()函数把换行符放在字符串末尾（假设输入行不溢出），通常要与fputs()函数配对使用，
除非该函数不在字符串末尾添加换行符。fputs() 函数的第2个参数指明它要写入的文件。
如果要显示在计算机显示器上，应使用stdout(标准输出)作为该参数
*/
// 使用fets()和fputs()
#include <stdio.h>
#define STLEN 14
int main(void)
{
    char words[STLEN];
    puts("Enter a string, please.");
    fgets(words, STLEN, stdin);
    /* 
    fgets函数第2个参数指明了读入字符的最大数量。如果该参数值是n，那么fgets()将读入n-1个字符，或者
    读到遇到的第一个换行符为止。
    如果fgets()读到一个换行符，会把它存储在字符串中。这点与gets()不同，gets()会丢弃换行符。
    fgets()函数的第3个参数指明要读入的文件。如果读入从键盘输入的数据，则以stdin(标准输入)作为参数，
    该标识符定义在stdio.h中
    */
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);  // 当puts()显示该字符串时又在末尾添加了换行符
    fputs(words, stdout); // 因为fputs()不在字符串末尾添加换行符，所以未打印出空行
    puts("Enter another string, please."); 
    fgets(words, STLEN, stdin);  
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words, stdout);
    puts("Done.");
    return 0;
}