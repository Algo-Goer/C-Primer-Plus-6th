/*
 * @Author: your name
 * @Date: 2021-10-20 20:00:20
 * @LastEditTime: 2021-10-20 20:07:16
 * @LastEditors: Please set LastEditors
 * @Description: ָ���ַ
 * @FilePath: \.vscode\C\1020 10.8 pnt_add.c
 */
#include <stdio.h>
#define SIZE 4
int main(void)
{
    short dates[SIZE];
    short * pti;
    short index;
    double bills[SIZE];
    double * ptf;
    pti = dates;   //�������ַ����ָ��
    ptf = bills;
    printf("%23s %15s\n", "short", "double");
    for (index = 0; index < SIZE; index++) 
       printf("pointers + %d: %10p  %10p\n", index, pti + index, ptf + index);
    return 0;
}