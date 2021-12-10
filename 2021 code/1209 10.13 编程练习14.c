// �䳤����VLA������������΢��13����ͨ�����ͬ����������û����
#include <stdio.h>
#define ROWS 3
#define COLS 5
void saveUp(int rows, int cols, double ar[rows][cols]);   // ����a���洢�û������3����
void showUp(int rows, int cols, double ar[rows][cols]);   // ��ʾ����
void avg(int rows, int cols, double ar[rows][cols]);      // ����b������ÿ��5�����ݵ�ƽ��ֵ
double avgAll(int rows, int cols, double ar[rows][cols]); // ����c�������������ݵ�ƽ��ֵ
double maxAll(int rows, int cols, double ar[rows][cols]); // ����d���ҳ���15�������е�MAX

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
        totalOneRow += subtot; // ��i�е�������֮��
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
    saveUp(ROWS, COLS, ar); // ����a   // ���Լ���&
    printf("This is what you entered before:\n");
    showUp(ROWS, COLS, ar);
    avg(ROWS, COLS, ar); // ����b
    double average = avgAll(ROWS, COLS, ar);
    printf("The average of all 15 data is: %lf\n", average); // ����c
    double max = maxAll(ROWS, COLS, ar);
    printf("The max of all 15 data is: %.1lf\n", max); // ����d
    // ����e��ӡ���н�����Ѿ����

    return 0;
}