/*
 * @Author: your name
 * @Date: 2021-10-20 18:45:02
 * @LastEditTime: 2021-10-20 18:48:10
 * @LastEditors: Please set LastEditors
 * @Description: ��ʼ������ʧ�ܡ�����δ��ʼ����������ʹ�õ�ֵ���ڴ���Ӧλ�������е�ֵ
 * @FilePath: \.vscode\C\1020 10.2  no_data.c
 */
#include <stdio.h>
#define SIZE 4
int main(void)
{
    int no_data[SIZE]; //δ��ʼ������
    int i;
    printf("%2s%14s\n", "i", "no_data[i]");
    for (i = 0; i < SIZE; i++)
        printf("%2d%14d\n", i, no_data[i]);
    return 0;
}
