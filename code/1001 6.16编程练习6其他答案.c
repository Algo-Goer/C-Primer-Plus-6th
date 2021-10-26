#include <stdio.h>
int main(void)
{
    int lower, upper, index;
    int square, cube;
    printf("Enter strating integer and ending integer:\n");

    while (scanf("%d %d", &lower, &upper) == 2)
    {
        printf("%5s %10s %15s\n", "num", "square", "cube");
        for (index = lower; index <= upper; index++)
        {
            square = index * index;
            cube = index * square;
            printf("%5d %10d %15d\n", index, square, cube);
        }
        printf("Enter next pair (non-numeric to quit):\n");
    }
    return 0;
}