// hiding.c -- 块中的变量
#include <stdio.h>
int main()
{
    int x = 30; // 原始x

    printf("x in outer block: %d at %p\n", x, &x);
    {
        int x = 77; // 新x，隐藏了原始x
        printf("x in inner block: %d at %p\n", x, &x);
    }
    printf("x in outer block: %d at %p\n", x, &x);
    while (x++ < 33) // 原始x          
    {
        int x = 100; // 新x，隐藏了原始x
        x++;
        printf("x in while loop: %d at %p\n", x, &x);
    }
    printf("x in outer block: %d at %p\n", x, &x);

    return 0;
}