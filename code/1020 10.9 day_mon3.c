/*
 * @Author: your name
 * @Date: 2021-10-20 20:12:08
 * @LastEditTime: 2021-10-20 20:16:22
 * @LastEditors: Please set LastEditors
 * @Description: uses pointer notation
 * @FilePath: \.vscode\C\1020 10.9 day_mon3.c
 */
#include <stdio.h>
#define MONTHS 12
int main(void)
{
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
    /*days��������Ԫ�صĵ�ַ��days + index��Ԫ��days[index]�ĵ�ַ����*(days + index)���Ǹ�Ԫ�ص�ֵ��
    �൱��days[index]��
    */    
    int index;
    for (index = 0; index < MONTHS; index++)
        printf("Month %2d has %d days.\n", index + 1, *(days + index)); //ָ���ʾ��
    //��days[index]��ͬ
    return 0;
}
/* 
10.1.c
for (index = 0; index < MONTHS; index++)
        printf("Month %2d has %2d days.\n", index + 1, days[index]); //�����ʾ��
*/