#include <stdio.h>
int main(void)
{
    int i, row;
    for (row = 1; row <= 5; row++)
    {
         for (i = 1; i <= row; i++)
              printf("$");
         printf("\n");
    }
    return 0;
}