#include <stdio.h>
int main(void)
{
    int number, min, max;
    int square, cube;
    printf("Please enter the min and max:\n");
    while (scanf("%d %d", &min, &max) == 2)
    {
        printf("%5s %10s %15s\n", "number", "square", "cube");
        for (number = min; number <= max; number++)
        {
            square = number * number;
            cube = square * number;
            printf("%5d %10d %15d\n", number, square, cube);
        }
        printf("Enter next pair (non-numeric to quit):\n");
    }
    return 0;
}