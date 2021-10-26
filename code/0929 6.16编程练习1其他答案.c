#include <stdio.h>
#define SIZE 26
int main()
{
    int i;
    char zimu[SIZE];

    for (i = 0; i < SIZE; i++)
         zimu[i] = 'a' + i;
    for (i = 0; i < SIZE; i++)
         printf("%c ", zimu[i]);
    printf("\n");
    return 0;
}