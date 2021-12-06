// 自定义数组
#include <stdio.h>
#define LEN 5
int return_index(double array[], int n);

int return_index(double array[], int n)
{
    int j = 0; // 最大值的下标
    double max = array[0];
    for (int index = 0; index < n; index++)
    {
        if (max < array[index])
        {
            max = array[index];
            j = index;
        }
    }
    return j;
}

int main(void) 
{
    double array[LEN];
    printf("Please enter 5 numbers: ");
    for (int i = 0; i < LEN; i++)
        scanf("%lf", &array[i]);  
        /* double类型必须用%lf，不然输出会出现0.0000，且
        可能出现比较大小时因为双精度变成单精度，返回结果错误，
        比如认为-1还是-2大 */
        /* 另外不要忘记& */
    int index = return_index(array, LEN);
    printf("最大值的下标为：%d\n", index);
    return 0;
}
