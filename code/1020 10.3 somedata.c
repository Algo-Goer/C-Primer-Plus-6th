/*
 * @Author: your name
 * @Date: 2021-10-20 18:48:55
 * @LastEditTime: 2021-10-20 18:50:59
 * @LastEditors: Please set LastEditors
 * @Description: ���ֳ�ʼ�����顣����ʼ���б��е�ֵ��������Ԫ�ظ��������������ʣ��Ԫ�ض���ʼ��Ϊ0
 * @FilePath: \.vscode\C\1020 10.3 somedata.c
 */
#include <stdio.h>
#define SIZE 4
int main(void)
{
    int some_data[SIZE] = {1492, 1066};
    int i;
    printf("%2s%14s\n", "i", "some_data[i]");
    for (i = 0; i < SIZE; i++)
        printf("%2d%14d\n", i, some_data[i]);
    return 0;
}