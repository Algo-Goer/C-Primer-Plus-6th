/*
 ����ÿ���ܽ�ˮ������ƽ����ˮ����5����ÿ�µ�ƽ����ˮ��
 */
#include <stdio.h>
#define YEARS 5
#define MONTHS 12
void sumPerYear(int years, int months, const double ar[years][months]);    // �䳤����VLA
                                                                           // ÿһ�꣬���µĽ�ˮ���ܺ�
double sumAllYears(int years, int months, const double ar[years][months]); //5����ܽ�ˮ��
void sumPerMonth(int years, int months, const double ar[years][months]);   // 5����ÿ�µ�ƽ����ˮ��

void sumPerYear(int years, int months, const double ar[years][months])
{
    for (int i = 0; i < years; i++)
    {
        double subtot = 0;
        // ÿһ�꣬���µĽ�ˮ���ܺ�
        for (int j = 0; j < months; j++)
        {
            subtot += ar[i][j];
        }
        printf("%5d %15.1lf\n", 2010 + i, subtot);
    }
}

double sumAllYears(int years, int months, const double ar[years][months])
{
    double total = 0;
    for (int i = 0; i < years; i++)
    {
        double subtot = 0;
        for (int j = 0; j < months; j++)
        {

            subtot += ar[i][j];
        }
        total += subtot;
    }
    return total;
}

void sumPerMonth(int years, int months, const double ar[years][months])
{

    for (int j = 0; j < months; j++)
    { //ÿ���£�5����ܽ�ˮ��
        double subtot = 0;
        for (int i = 0; i < years; i++)
        {
            subtot += ar[i][j];
        }
        printf("%-5.1lf ", subtot / years);
    }
}

int main(void)
{
    double total = 0;
    //��2010~2014��Ľ�ˮ�����ݳ�ʼ������
    const double rain[YEARS][MONTHS] =
        {
            {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
            {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
            {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
            {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
            {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}};
    printf("YEAR RAINFALL (inches):\n");
    sumPerYear(YEARS, MONTHS, rain);

    total = sumAllYears(YEARS, MONTHS, rain);
    printf("\nThe total rain of 5 years: %.1lf inches.", total);
    printf("\nThe yearly average is %.1lf inches.\n\n", total / YEARS);

    printf("MONTHLY AVARAGES:\n");
    printf("Jan   Feb   Mar   Apr   May   Jun   Jul   Aug   Sep   Oct   Nov   Dec\n");
    sumPerMonth(YEARS, MONTHS, rain);

    return 0;
}
