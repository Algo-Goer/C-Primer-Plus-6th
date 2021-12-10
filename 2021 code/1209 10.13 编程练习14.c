// 变长数组VLA，函数声明略微和13题普通情况不同，函数定义没区别
#include <stdio.h>
#define ROWS 3
#define COLS 5
void saveUp(int rows, int cols, double ar[rows][cols]);   // 任务a：存储用户输入的3组数
void showUp(int rows, int cols, double ar[rows][cols]);   // 显示数组
void avg(int rows, int cols, double ar[rows][cols]);      // 任务b：计算每组5个数据的平均值
double avgAll(int rows, int cols, double ar[rows][cols]); // 任务c：计算所有数据的平均值
double maxAll(int rows, int cols, double ar[rows][cols]); // 任务d：找出这15个数据中的MAX

void saveUp(int rows, int cols, double ar[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            scanf("%lf", &ar[i][j]);
        }
    }
}

void showUp(int rows, int cols, double ar[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%.1lf  ", ar[i][j]);
        }
        putchar('\n');
    }
}

void avg(int rows, int cols, double ar[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        double subtot = 0;
        double average = 0;
        for (int j = 0; j < COLS; j++)
        {
            subtot += ar[i][j];
        }
        average = subtot / COLS;
        printf("Array %d: The sum of the 5 data is %.1lf\n", i + 1, subtot);
        printf("Array %d: The average of the 5 data is %.1lf\n", i + 1, average);
    }
}

double avgAll(int rows, int cols, double ar[rows][cols])
{
    double totalAllRows = 0;
    double totalOneRow = 0;
    for (int i = 0; i < rows; i++)
    {
        double subtot = 0;
        double average = 0;
        for (int j = 0; j < COLS; j++)
        {
            subtot += ar[i][j];
        }
        totalOneRow += subtot; // 第i行的所有列之和
    }
    totalAllRows += totalOneRow;
    return totalAllRows / (ROWS * COLS);
}

double maxAll(int rows, int cols, double ar[rows][cols])
{
    double max = ar[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (max < ar[i][j])
            {
                max = ar[i][j];
            }
        }
    }
    return max;
}

int main(void)
{
    double ar[ROWS][COLS];
    printf("Please enter 3 arrays, each involving 5 double data:\n");
    saveUp(ROWS, COLS, ar); // 任务a   // 可以加上&
    printf("This is what you entered before:\n");
    showUp(ROWS, COLS, ar);
    avg(ROWS, COLS, ar); // 任务b
    double average = avgAll(ROWS, COLS, ar);
    printf("The average of all 15 data is: %lf\n", average); // 任务c
    double max = maxAll(ROWS, COLS, ar);
    printf("The max of all 15 data is: %.1lf\n", max); // 任务d
    // 任务e打印所有结果都已经完成

    return 0;
}