#include <stdio.h>
#define SIZE 8
int main(void)
{
    int num[SIZE], i;
    printf("Please enter 8 int numbers:\n");
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("Inverted order:\n");
    for (i = 7; i >= 0; i--)
        printf("%d ", num[i]);
    printf("\n");
    return 0;
}