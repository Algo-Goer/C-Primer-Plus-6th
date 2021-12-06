// max()��min()�����ϲ�д��һ������
#include <stdio.h>
#define LEN 5
double diff(const double array[], int n);

double diff(const double array[], int n)
{
    double max = array[0];
    double min = array[0];

    for (int i = 0; i < n; i++)
    {
        if (max < array[i])
           max = array[i];
        else if (min > array[i])
           min = array[i];
    }
    return max - min;
}

int main(void)
{
    double array[LEN] = {0};
    printf("Please enter 5 numbers: ");
    for (int i = 0; i < LEN; i++)
        scanf("%lf", &array[i]);  // double����һ��Ҫ��%lf˫���ȣ�������%f�����ȣ�����float����
    double difference = diff(array, LEN);
    printf("The difference of the maximum and minimum value is: %g\n", difference);
    return 0;
}