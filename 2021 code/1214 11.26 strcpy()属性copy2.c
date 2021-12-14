#include <stdio.h>
#include <string.h>  // 提供strcpy()的函数原型
#define WORDS "beast"
#define SIZE 40

int main(void)
{
    const char * orig = WORDS;  // orig是指向char的指针
    char copy[SIZE] = "Be the best as you can be.";
    char * ps;

    puts(orig);
    puts(copy);
    ps = strcpy(copy + 7, orig);
    puts(copy);
    puts(ps);

    return 0;
}