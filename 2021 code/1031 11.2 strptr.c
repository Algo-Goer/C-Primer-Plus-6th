// 用双引号括起来的内容被视为指向该字符串存储位置的指针。这类似于把数组名作为指向该数组位置的指针
// 把字符串看作指针
#include <stdio.h>
int main(void)
{
    printf("%s, %p, %c\n", "We", "are", *"space farers");
    return 0;
}