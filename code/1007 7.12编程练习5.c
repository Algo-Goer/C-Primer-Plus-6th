#include <stdio.h>
int main(void)
{
    char ch;
    int count = 0;
    printf("Enter sentences ending with #\n");
    while ((ch = getchar()) != '#')
    {
        switch(ch)
        {
            case '!': 
                putchar('!');
                putchar('!');
                count++;
                break;
            case '.':
                putchar('!');
                count++;
                break;
            default:  
                putchar(ch);
        }
    }
    printf("\n");
    printf("%d substitutes.", count);
    return 0;
}