/*
 * @Author: your name
 * @Date: 2021-10-20 20:39:43
 * @LastEditTime: 2021-10-20 20:49:20
 * @LastEditors: Please set LastEditors
 * @Description: ����Ԫ��֮��
 * @FilePath: \.vscode\C\1020 10.11 sum_arr2.c
 */
#include <stdio.h>
#define SIZE 10
int sump(int *start, int *end);
int main(void)
{
    int marbles[SIZE] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20 };
    long answer;
    answer = sump(marbles, marbles + SIZE);
    printf("The total number of marbles is %ld.\n", answer);
    return 0;
}
/*ʹ��ָ���㷨*/
int sump(int *start, int *end)
{
    int total = 0;
    while (start < end)  //�õ�2��ָ��������ѭ��
    {
        total += *start; //������Ԫ��ֵ������  
        //ָ��start��ʼָ��marbles�������Ԫ�أ����Ը�ֵ���ʽtotal += *start����Ԫ�أ�20���Ӹ�total
        start++;         //��ָ��ָ����һ��Ԫ�ء���Ϊstart��ָ��int��ָ�룬start����1�൱����ֵ����int���͵Ĵ�С
    }
    return total;
}