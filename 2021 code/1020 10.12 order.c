/*
 * @Author: your name
 * @Date: 2021-10-20 20:50:51
 * @LastEditTime: 2021-10-20 20:53:57
 * @LastEditors: Please set LastEditors
 * @Description: ָ�������е����ȼ�
 * @FilePath: \.vscode\C\1020 10.12 order.c
 */
#include <stdio.h>
int data[2] = {100, 200};
int moredata[2] = {300, 400};
int main(void)
{
    int *p1, *p2, *p3;
    p1 = p2 = data;
    p3 = moredata;
    printf("   *p1 = %d,   *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);
    printf("*p1++ = %d, *++p2 = %d, (*p3)++ = %d\n", *p1++, *++p2, (*p3)++);
    /* һԪ�����*��++�����ȼ���ͬ����������Ǵ�����������ָ���ȵ�����ָ�� */
    printf("  *p1 = %d, *p2 = %d,  *p3 = %d\n", *p1, *p2, *p3);
    return 0;
}
