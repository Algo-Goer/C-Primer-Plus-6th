// ��ӡһ���ַ�������ͳ�ƴ�ӡ���ַ���
#include <stdio.h>
int put2(const char *string)
{
    int count = 0;
    while (*string) // �����÷�  ��stringָ����ַ�ʱ��*stringֵΪ0������������Ϊ�٣�whileѭ������
    {
        putchar(*string++);
        count++;
    }
    putchar('\n'); // ��ͳ�ƻ��з�
    return (count);
}