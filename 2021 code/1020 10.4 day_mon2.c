/*
 * @Author: your name
 * @Date: 2021-10-20 18:52:03
 * @LastEditTime: 2021-10-22 15:48:46
 * @LastEditors: Please set LastEditors
 * @Description: ����ʡ�Է������е����֣��ñ������Զ�ƥ�������С�ͳ�ʼ���б��е��������ñ���������Ԫ�ظ���
 * @FilePath: \.vscode\C\1020 10.4 day_mon2.c
 */
#include <stdio.h>
int main(void)
{
    const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31};  //ʹ��const�ؼ��ֱ�������
    int index;
    for (index = 0; index < sizeof(days) / sizeof(days[0]); index++)
        printf("Month %2d has %d days.\n", index + 1, days[index]);
    return 0;
    /*�� C �����У�sizeof() ��һ���ж��������ͻ��߱��ʽ���ȵ��������
    ע��forѭ���еĲ��������������˹��������׳��������ü���������������С��
    sizeof���������������������С�����ֽ�Ϊ��λ����sizeofdays[0]��������һ��Ԫ�صĴ�С�����ֽ�Ϊ��λ����
    ��������Ĵ�С���Ե���Ԫ�صĴ�С��������Ԫ�ظ�����
    �����Ƿ�ֹ��ʼ��ֵ�ĸ�����������Ĵ�С���ó����ҳ������С��
    */
}
