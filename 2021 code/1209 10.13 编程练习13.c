#include <stdio.h>
#define ROWS 3
#define COLS 5
void saveUp(double ar[][COLS], int rows);   // ����a���洢�û������3����
void showUp(double ar[][COLS], int rows);   // ��ʾ����
void avg(double ar[][COLS], int rows);      // ����b������ÿ��5�����ݵ�ƽ��ֵ
double avgAll(double ar[][COLS], int rows); // ����c�������������ݵ�ƽ��ֵ
double maxAll(double ar[][COLS], int rows); // ����d���ҳ���15�������е�MAX

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
        totalOneRow += subtot; // ��i�е�������֮��
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
    saveUp(ar, ROWS); // ����a   // ���Լ���&
    printf("This is what you entered before:\n");
    showUp(ar, ROWS);
    avg(ar, ROWS); // ����b
    double average = avgAll(ar, ROWS);
    printf("The average of all 15 data is: %lf\n", average); // ����c
    double max = maxAll(ar, ROWS);
    printf("The max of all 15 data is: %.1lf\n", max); // ����d
    // ����e��ӡ���н�����Ѿ����

    return 0;
}