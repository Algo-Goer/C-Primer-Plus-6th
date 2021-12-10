#include <stdio.h>
#define ROWS 3
#define COLS 5
void saveUp(double ar[][COLS], int rows);   // 任务a：存储用户输入的3组数
void showUp(double ar[][COLS], int rows);   // 显示数组
void avg(double ar[][COLS], int rows);      // 任务b：计算每组5个数据的平均值
double avgAll(double ar[][COLS], int rows); // 任务c：计算所有数据的平均值
double maxAll(double ar[][COLS], int rows); // 任务d：找出这15个数据中的MAX

void saveUp(double ar[][COLS], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            scanf("%lf", &ar[i][j]);
        }
    }
}

void showUp(double ar[][COLS], int rows)
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

void avg(double ar[][COLS], int rows)
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

double avgAll(double ar[][COLS], int rows)
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

double maxAll(double ar[][COLS], int rows)
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
    saveUp(ar, ROWS); // 任务a   // 可以加上&
    printf("This is what you entered before:\n");
    showUp(ar, ROWS);
    avg(ar, ROWS); // 任务b
    double average = avgAll(ar, ROWS);
    printf("The average of all 15 data is: %lf\n", average); // 任务c
    double max = maxAll(ar, ROWS);
    printf("The max of all 15 data is: %.1lf\n", max); // 任务d
    // 任务e打印所有结果都已经完成

    return 0;
}