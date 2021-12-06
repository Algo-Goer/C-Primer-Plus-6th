// max()与min()函数合并写成一个函数
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
        scanf("%lf", &array[i]);  // double类型一定要用%lf双精度，不能用%f单精度，那是float类型
    double difference = diff(array, LEN);
    printf("The difference of the maximum and minimum value is: %g\n", difference);
    return 0;
}