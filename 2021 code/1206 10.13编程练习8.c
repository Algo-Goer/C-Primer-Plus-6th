// ����������Ԫ�صĵ�ַ�ʹ�����Ԫ�ظ���
// �����õ�ָ����
#include <stdio.h>
void copy_ptr(double *target, double *source, int n);
/* ʹ�ô�ָ���ʾ����ָ������ĺ������е�2�ݿ���
   ��Ŀ����������Դ�������ʹ�������Ԫ�ظ�����Ϊǰ���������Ĳ��� */

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
