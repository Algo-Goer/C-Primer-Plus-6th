/*
 * @Author: your name
 * @Date: 2021-10-20 18:38:45
 * @LastEditTime: 2021-10-20 18:44:18
 * @LastEditors: Please set LastEditors
 * @Description: ��ӡÿ���µ�����
 * @FilePath: \.vscode\C\1020 10.1 day_mon1.c
 */
#include <stdio.h>
#define MONTHS 12
int main(void)
{
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    /*����ֻ�����飬��const�����ͳ�ʼ�����飺
    const int days[MONTHS] = 
    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    */
    //һ����const���Ͳ��ܸ����ٸ�ֵ
    int index;
    for (index = 0; index < MONTHS; index++)
        printf("Month %2d has %2d days.\n", index + 1, days[index]);
        //%2d:���ְ����Ϊ2�������Ҷ��뷽ʽ�����������λ������2λ������߲��ո�
    return 0;
}