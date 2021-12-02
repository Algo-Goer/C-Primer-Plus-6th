// 使用一个简单的驱动程序测试put1()和put2()，并演示了嵌套函数额调用
#include <stdio.h>
void put1(const char *);
int put2(const char *);
int main(void)
{
    put1("If I'd as much money");
    put1(" as I could spend.\n");
    printf("I count %d character.\n", put2("I never would cry old chairs to mend."));
    /*
    程序中使用printf()打印put2()的值，但是为了获得put2()的返回值，计算机必须先执行put2()
    因此在打印字符数之前先打印了传递给该函数的字符串
    return 0; 
    */
}

void put1(const char *string)
{
    while (*string) //  与*string != '\0'相同
        putchar(*string++);
}
int put2(const char *string)
{
    int count = 0;
    while (*string)
    {
        putchar(*string++);
        count++;
    }
    putchar('\n');
    return (count);
}
