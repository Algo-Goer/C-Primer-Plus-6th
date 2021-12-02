#include <stdio.h>
void copy_arr(double target[], double source[], int n);
/* ʹ�ô������ʾ���ĺ������е�1�ݿ��� */
void copy_ptr(double *target2, double *source, int n);
/* ʹ�ô�ָ���ʾ����ָ������ĺ������е�2�ݿ���
   ��Ŀ����������Դ�������ʹ�������Ԫ�ظ�����Ϊǰ���������Ĳ��� */
void copy_ptrs(double *target3, double *source, double *end);
/* ������������Ŀ����������Դ��������ָ��Դ�������һ��Ԫ��
   �����Ԫ�ص�ָ����Ϊ���� */
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