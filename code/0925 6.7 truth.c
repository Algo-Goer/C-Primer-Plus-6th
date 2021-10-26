//哪些值为真
//所有非零值都为真，只有0视为假。只要测试条件的值非零，就会执行while循环。这是从数值方面而不是从真/假
//方面来看测试条件。关系表达式为真，求值得1；关系表达式为假，求值得0。因此，这些表达式实际上相当于数值。
#include <stdio.h>
int main(void) 
{
    int n = 3;
    while (n)
        printf("%2d is true\n", n--);
    printf("%2d is false\n", n);
    n = -2;
    while (n)
        printf("%2d is true\n", n++);
    printf("%2d is false\n", n);
    return 0;
} 