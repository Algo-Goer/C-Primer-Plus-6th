#include <stdio.h>
int main(void)
{
    char ch;
    int count = 0;
    printf("Enter something ending with #\n");
    while((ch = getchar()) != '#')
    {
        if (ch == '!')
        {
           putchar('!');
           putchar('!');
           count++;
        }
        else if (ch == '.')
        { 
           putchar('!');
           count++;
        }
        else 
           putchar(ch);
    }
    printf("\n");
    printf("%d subtitutes.", count);
    return 0;
}