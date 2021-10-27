#include <stdio.h>
#define N 6

int main()
{
    char a = 'A';
    int i, j;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", a++);
        }
        printf("\n");
    }
    return 0;
}