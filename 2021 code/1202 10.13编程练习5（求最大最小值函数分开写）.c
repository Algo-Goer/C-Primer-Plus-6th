// max()��min()�����ֿ�д
#include <stdio.h>
#define LEN 5
double max(double array[], int n);
double min(double array[], int n);

double max(double array[], int n)
{
    double max = array[0];
    for (int i = 0; i < n; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}

double min(double array[], int n)
{
    double min = array[0];
    for (int i = 0; i < n; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }
    return min;
}

int main(void)
{
    double array[LEN] = {0};
    printf("Please enter 5 numbers: ");
    for (int i = 0; i < LEN; i++)
        scanf("%lf", &array[i]);  // double����һ��Ҫ��%lf˫���ȣ�������%f�����ȣ�����float����
    double maxValue = max(array, LEN);
    double minValue = min(array, LEN);
    double diff = maxValue - minValue; 
    printf("The maximum value is %lf\n", maxValue);
    printf("The minimum value is %lf\n", minValue);
    printf("The difference of the maximum and minimum value is: %lf\n", diff);
    return 0;
}