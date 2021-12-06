// 参数，数组元素的地址和待处理元素个数
// 必须用到指针了
#include <stdio.h>
void copy_ptr(double *target, double *source, int n);
/* 使用带指针表示法和指针递增的函数进行第2份拷贝
   把目标数组名、源数组名和待拷贝的元素个数作为前两个函数的参数 */

int main(void)
{
    double source[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    double target[3];
    printf("The data is:\n");
    for (int i = 0; i < 7; i++)
        printf("%8.1f\n", source[i]);
    copy_ptr(target, source, 3);

    return 0;
}

void copy_ptr(double *target, double *source, int n)
{
    printf("The copy of the data is:");
    for (int index = 2; index < 5; index++)
    {
        *target = *(source + index);
        printf("%15.1f", *target);
        target++;
    }
    printf("\n");
}
