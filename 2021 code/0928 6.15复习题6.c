#include <stdio.h>
int main(void)
{
    int i;
    int row;
    char ch = '$';
    for (row = 1; row <= 4; row++) 
    {
        for (i = 1; i <=8; i++) 
            printf("%c", ch);
            printf("\n");
    }
    return 0;
}