#include <stdio.h>
void copy_arr(double target[], double source[], int n);
/* 使用带数组表示法的函数进行第1份拷贝 */
void copy_ptr(double *target2, double *source, int n);
/* 使用带指针表示法和指针递增的函数进行第2份拷贝
   把目标数组名、源数组名和待拷贝的元素个数作为前两个函数的参数 */
void copy_ptrs(double *target3, double *source, double *end);
/* 第三个函数以目标数组名、源数组名和指向源数组最后一个元素
   后面的元素的指针作为参数 */
int main(void)
{
    double source[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    double target1[5];
    double target2[5];
    double target3[5];
    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);

    return 0;
}
void copy_arr(double target[], double source[], int n)
{
    int index = 0;
    printf("The first copy of the data is:");
    for (index = 0; index < n; index++)
    {
        target[index] = source[index];
        printf("%15.1f", target[index]);
    }
    printf("\n");
}
void copy_ptr(double *target2, double *source, int n)
{
    int index;
    printf("The second copy of the data is:");
    for (index = 0; index < n; index++)
    {
        *target2 = *(source + index);
        printf("%15.1f", *target2);
        target2++;
    }
    printf("\n");
}
void copy_ptrs(double *target3, double *source, double *end)
{
    printf("The third copy of the data is:");
    while (source < end)
    {
        *target3 = *source;
        printf("%15.1f", *target3);
        target3++;
        source++;
    }
    printf("\n");
}