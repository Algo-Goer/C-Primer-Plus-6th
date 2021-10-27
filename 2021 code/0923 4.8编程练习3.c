//读取浮点数，首先以小数点计数法打印，然后以指数计数法打印。
#include <stdio.h>
int main(void) 
{
    float number;
    printf("enter the float:\n");
    scanf("%f",&number);
    printf("The input is %.1f or %.1e.",number,number);
    printf("The input is %+.3f or %.3E",number,number);
    return 0;
}