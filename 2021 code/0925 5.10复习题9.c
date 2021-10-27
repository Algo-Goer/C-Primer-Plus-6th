#include <stdio.h>
int main(void) 
{
    char ch = 'a';
    while (ch < 'g')
    {
        printf("%5c", ch);
        ch++;
    }
    printf("%5c\n", ch);
    return 0;
}

