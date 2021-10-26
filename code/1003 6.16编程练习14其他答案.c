#include <stdio.h>
int main(void)
{
    double array1[8];
    double array2[8];
    int i;

    printf("Please enter eight decimals.\n");
    for (i = 0; i < 8; i++)
         scanf("%lf", &array1[i]);
    array2[0] = array1[0];
    for (i = 1;i < 8; i++)
    {
        array2[i] = array2[i - 1] + array1[i];
    }
    printf("array:\n");
    for (i = 0; i < 8; i++)
        printf("%10.3f", array1[i]);
    printf("\n");
    for (i = 0; i < 8; i++)
        printf("%10.3f", array2[i]);
    printf("\n");

    return 0;
}