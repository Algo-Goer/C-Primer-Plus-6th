// 使用fgets()
// 如果输入太长，超过数组可容纳的字符数时，如果想丢弃输入行的超出字符
#include <stdio.h>
#define STLEN 10
int main(void)
{
    char words[STLEN];
    int i;
    puts("Enter strings (empty line to quit): ");
    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
    {
        i = 0;
        while (words[i] != '\n' && words[i] != '\0')
            i++;
        if (words[i] == '\n')
            words[i] = '\0';  // 空字符用于标记C字符串末尾的字符，对应字符编码是0
        else // 如果words[i] == '\0'则执行这部分代码
            while (getchar() != '\n')
                continue;
        puts(words);
    }
    puts("done");
    return 0;
}
// 空指针（或NULL）有一个值，该值不会与任何数据的有效地址对应