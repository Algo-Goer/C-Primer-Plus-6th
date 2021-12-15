#include <stdio.h>
#define LEN 81
char *pr(char *str);

char *pr(char *str)
{
    char *pc;

    pc = str;
    while (*pc)
        putchar(*pc++);
    do
    {
        putchar(*--pc);
    } while (pc - str);
    return (pc);
}

int main(void)
{
    char x;
    char * pr(char *);
    x = pr("Ho Ho Ho!");
    return 0;
}