//注意花括号的使用
//糟糕的代码创建了无限循环
#include <stdio.h>
int main(void) 
{
    int n = 0;
    while (n < 3)
         printf("n is %d\n", n); //结束
         n++;//没加花括号，这句话不进入循环。从而程序无限循环
    printf("That's all this program does.\n");
    return 0;
}