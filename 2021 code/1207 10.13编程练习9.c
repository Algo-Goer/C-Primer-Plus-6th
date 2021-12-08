/* 考查变长数组VLA
 * 变长数组把数组维度作为参数传递，对应函数原型和函数调用如下：
 void display(int rows, int cols, double ar[rows][cols]);
 ...
 display(5, 12, sales);
 */
#include <stdio.h>
#define ROWS 3
#define COLS 5
void copy(int rows, int cols, double source[rows][cols], double target[rows][cols]);
void show(int rows, int cols, double ar[rows][cols]);

void copy(int rows, int cols, double source[rows][cols], double target[rows][cols])
{
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            target[i][j] = source[i][j];
}

void show(int rows, int cols, double ar[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%.2lf\t", ar[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    double array[ROWS][COLS] =
        {{1.1, 1.2, 1.3, 1.4, 1.5},
         {2.1, 2.2, 2.3, 2.4, 2.5},
         {3.1, 3.2, 3.3, 3.4, 3.5}};
    double target[ROWS][COLS];
    copy(ROWS, COLS, array, target);
    printf("The source of the data is:\n");
    show(ROWS, COLS, array);
    printf("The copy of the data is:\n");
    show(ROWS, COLS, target);

    return 0;
}