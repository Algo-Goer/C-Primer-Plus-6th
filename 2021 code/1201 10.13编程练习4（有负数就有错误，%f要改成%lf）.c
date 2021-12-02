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
    double array[LEN] = { -1, -2, -3, 0, -8 };
    int index = return_index(array, LEN);
    printf("最大值的下标为：%d\n", index);
    return 0;
}
