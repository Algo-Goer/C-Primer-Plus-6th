#include <stdio.h>
int main(void) 
{
    char ch;
    int count = 0;
    
    while ((ch = getchar()) != '#')
    {
        count++;
        printf("%c-%-5d", ch, ch);
        if (count % 8 == 0)
           printf("\n");
    }
    return 0;
}