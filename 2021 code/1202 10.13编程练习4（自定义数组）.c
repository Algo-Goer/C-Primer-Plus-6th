// �Զ�������
#include <stdio.h>
#define LEN 5
int return_index(double array[], int n);

int return_index(double array[], int n)
{
    int j = 0; // ���ֵ���±�
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
        /* double���ͱ�����%lf����Ȼ��������0.0000����
        ���ܳ��ֱȽϴ�Сʱ��Ϊ˫���ȱ�ɵ����ȣ����ؽ������
        ������Ϊ-1����-2�� */
        /* ���ⲻҪ����& */
    int index = return_index(array, LEN);
    printf("���ֵ���±�Ϊ��%d\n", index);
    return 0;
}
