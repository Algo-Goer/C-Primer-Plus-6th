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
}