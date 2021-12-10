// 只有指针表示法可以进行递增操作
// 指针加法操作：数组表示法和指针表示法均可
#include <stdio.h>

int main(void)
{
    char heart[] = "I love you!";
    const char *head = "I love you!";

    for (int i = 0; i < 6; i++)
        putchar(*(heart + i));
    putchar('\n');
    for (int i = 0; i < 6; i++)
        putchar(*(head + i));
    putchar('\n');

    while (*(head) != '\0')   // 在字符串末尾处停止
        putchar(*(head++));   // 打印字符，指针指向下一个位置
    
    head = heart;      // head现在指向数组heart，这使得head指针指向heart数组的首元素
    
}