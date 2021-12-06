// 6. 把double类型数组中的数据倒序排列，并测试函数
#include <stdio.h>
#define LEN 5
void invertedOrder(double *ptr, const double arr[], int n);

void invertedOrder(double *ptr, const double arr[], int n)
{
    int i;
    for (i = n - 1; i >= 0; i--)
    {
        *ptr = arr[i];
        ptr++;
    }
}

int main(void)
{
    double arr[LEN] = {0};
    double target[LEN];
    printf("Please enter 5 numbers: ");
    for (int i = 0; i < LEN; i++)
        scanf("%lf", &arr[i]);
    invertedOrder(target, arr, LEN);
    printf("Inverted array: \n");
    for (int i = 0; i < LEN; i++)
        printf("%.2lf\t", target[i]);
    putchar('\n');
    return 0;
}