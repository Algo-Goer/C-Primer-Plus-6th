/*
 * @Author: your name
 * @Date: 2021-10-20 20:32:47
 * @LastEditTime: 2021-10-20 20:54:56
 * @LastEditors: Please set LastEditors
 * @Description: �ó����ӡԭʼ�����С����ʾ������ĺ����βεĴ�С������Ԫ��֮��
 * @FilePath: \.vscode\C\1020 10.10 sum_arr1.c
 */
//�����������֧����ת��˵��%zd��ӡsizeof����ֵ������%u��%lu���档
//�ڱ�д����ʱ����ѡ���������ʾ������ָ���ʾ����������ʹ�������ʾ�����ú����Ǵ����������һĿ������ԡ�
#include <stdio.h>
#define SIZE 10
int sum(int ar[], int n);
int main(void)
{ //marbles��һ�����飬ar��һ��ָ��marbles������Ԫ�ص�ָ��
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;
    answer = sum(marbles, SIZE);
    printf("The total number of marbles is %ld.\n", answer);
    printf("The size of marbles is %zd bytes.\n", sizeof marbles);
    return 0;
}
int sum(int ar[], int n)
{
    int i;
    int total = 0;
    for (i = 0; i < n; i++)
        total += ar[i];
    printf("The size of ar is %zd bytes.\n", sizeof ar);
    return total;
}
