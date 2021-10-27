#include <stdio.h>
int main(void)
{
    int ch;
    while((ch = getchar()) != '\n')
    {  
       putchar(ch++);
       putchar(++ch);
    }
    return 0;
}