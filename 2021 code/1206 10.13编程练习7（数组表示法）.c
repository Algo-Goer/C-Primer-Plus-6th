/* 
 * ��ʼ��һ��double���͵Ķ�ά���飬�ñ����ϰ2�е�һ�����������Ѹ������е�
 * ���ݿ�������һ����ά�����У���Ϊ��ά����ʱ��������飬���Կ�ʹ�ô���һά
 * ����Ŀ������������������е�ÿ�������� 
 */
// �����ʾ��
#include <stdio.h>
#define ROW 3
#define COL 2
void copy_arr(double target[][COL], const double source[][COL], int x, int y);

void copy_arr(double target[][COL], const double source[][COL], int x, int y)
{
    printf("The copy of the data is: \n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            target[i][j] = source[i][j];
            printf("%.2lf\t", target[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    const double source[ROW][COL] = {{1, 3}, {8, 8}, {5, 2}};
    // �������鲻���ı䡪�����������д�ĺ��������޸����飬��ô�����������β�ʱ���ʹ��const
    double target[ROW][COL];
    copy_arr(target, source, ROW, COL);
    return 0;
}