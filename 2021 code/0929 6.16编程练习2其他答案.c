#include<stdio.h>

int main()
{
    const int ROWS = 5;
    const int CHARS = 5;
    int row, ch;

    for (row = ROWS; row > 0; row--) 
    {
        for (ch = row; ch <= CHARS; ch++) 
            printf("$");
        printf("\n");
    }

    return 0;
}