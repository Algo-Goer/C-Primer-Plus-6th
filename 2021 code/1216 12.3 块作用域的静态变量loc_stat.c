// 使用局部静态变量
#include <stdio.h>
void trystat(void);

int main(void)
{
    int count;

    for (count = 1; count <= 3; count++)
    {
        printf("Here comes iteration %d:\n", count);
        trystat();
    }

    return 0;
}

void trystat(void)
{
    int fade = 1;
    static int stay = 1;

    printf("fade = %d and stay = %d\n", fade++, stay++);
}
/*
先打印再递增变量值。
静态变量stay保存了它被递增1后的值，但是fade变量每次都是1。
这表明了初始化不同：每次调用trystat()都会初始化fade，
但是stay只在编译trystat()时被初始化一次。
如果未显式初始化静态变量，它们会被初始化为0。
*/
  