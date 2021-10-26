#include <stdio.h>
int main(void)
{
    int row;
    int i;
    char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    lets[0] = 'A';
    for(row = 1; row <= 6; row++)
    {
        for(i = 5; i >= (6 - row); i--)
            printf("%c", lets[i]);
        printf("\n");
    }
    return 0;
}