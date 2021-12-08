#include <stdio.h>
#define ROWS 3
#define COLS 5
void show(int rows, int cols, int ar[rows][cols]);
void twofold(int target[][COLS], const int source[][COLS], int x, int y);

void show(int rows, int cols, int ar[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", ar[i][j]);
        }
        putchar('\n');
    }
}

void twofold(int target[][COLS], const int source[][COLS], int x, int y)
{
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            target[i][j] = 2 * source[i][j];
}

int main(void)
{
    const int array[ROWS][COLS] =
        {
            {1, 2, 3, 4, 5},
            {2, 4, 6, 8, 10},
            {3, 6, 9, 12, 15}};
    int target[ROWS][COLS];
    printf("The array is:\n");
    show(ROWS, COLS, array);
    printf("The array has increased twofold:\n");
    twofold(target, array, ROWS, COLS);
    show(ROWS, COLS, target);

    return 0;
}