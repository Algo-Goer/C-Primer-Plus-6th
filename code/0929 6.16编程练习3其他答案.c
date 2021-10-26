#include <stdio.h>

int main()
{
    int i;
    char ch;

    for (i = 0; i < 6; i++)
    {
        for (ch = 'F'; ch >= ('F' - i); ch--)
             printf("%c", ch);
        printf("\n");
    }

    return 0;
}