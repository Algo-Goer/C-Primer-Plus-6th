/*
 * @Author: your name
 * @Date: 2021-10-22 15:42:29
 * @LastEditTime: 2021-10-22 15:47:41
 * @LastEditors: Please set LastEditors
 * @Description: ��������ĺ���
 * @FilePath: \.vscode\C\1020 10.14 arf.c
 */
#include <stdio.h>
#define SIZE 5
void show_array(const double ar[], int n);  //��const double *ar ������ԭ��д����
void mult_array(double ar[], int n, double mult); //����dip�����ֵ
int main(void)
{
    double dip[SIZE] = { 20.0, 17.66, 8.2, 15.3, 22.22 };
    printf("The original dip array:\n");
    show_array(dip, SIZE);
    mult_array(dip, SIZE, 2.5);
    printf("The dip array after calling mult_array():\n");
    show_array(dip, SIZE);
    return 0;
}
/*
��ʾ��������
���øı����飬���������������β�ʱʹ����const
*/
void show_array(const double ar[], int n)
{
    int i;
    for (i = 0; i < n; i++)
         printf("%8.3f ", ar[i]);
    putchar('\n');
}
/*
�������ÿ��Ԫ�ض�������ͬ��ֵ
��Ҫ�޸�����Ԫ�ص�ֵ�����Բ�ʹ��const
*/
void mult_array(double ar[], int n, double mult)
{
    int i;
    for (i = 0; i < n; i++)
       ar[i] *= mult;   //��Ȼmult_array()����dip�����ֵ������δʹ��return���ơ�����������void��
}