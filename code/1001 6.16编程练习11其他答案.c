#include <stdio.h>
#define SIZE 8
int main()
{
    int a[SIZE], i;
    printf("Enter 8 int values: ");
    for(i = 0; i < SIZE; i++)
        scanf("%d", &a[i]);
    for(i = SIZE - 1; i >= 0; i--) 
        printf("%d", a[i]);
    printf("\n");
    return 0;
}