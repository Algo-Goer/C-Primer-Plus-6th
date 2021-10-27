#include <stdio.h>
#define SIZE 8
int main(void) 
{
    double a[SIZE], b[SIZE];
    
    printf("Please input the value of the first array:\n");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%lf", &a[i]);
        for (int j = 0; j <= i; j++)
        {
            b[0] = a[0];
            b[j] = b[j - 1] + a[j];
        }
    }
    printf("\n");
    for ( int i = 0; i < SIZE; i++)
    {
        printf("%7.2f", a[i]);
    }
    printf("\n");
    for ( int i = 0; i < SIZE; i++)
    {
        printf("%7.2f", b[i]);
    }
    printf("\n");
    return 0;
}