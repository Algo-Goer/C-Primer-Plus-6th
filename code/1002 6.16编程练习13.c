#include <stdio.h>
#define SIZE 8
int main(void) 
{
    int a[SIZE], i;
    a[0] = 1;
    for (i = 1; i < SIZE; i++)
    {
        a[i] = 2 * a[i - 1];
    }
    i = 0;
    do
    {
        printf("%d\n", a[i]);
        i++;
    } while (i < SIZE);
    printf("\n");

    return 0;
}