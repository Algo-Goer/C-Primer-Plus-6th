/* ���һ������������һ��ָ���ַ�����ָ�룬����ָ����ַ�����1���ո��ַ���ָ�룬
�����δ�ҵ��ո��ַ����򷵻ؿ�ָ�� */
#include <stdio.h> // �ṩNULL�Ķ���
char *strblk(char *string)
{
    while (*string != ' ' && *string != '\0')
        string++; // �ڵ�1���հ׻���ַ���ֹͣ
    if (*string == '\0')
        return NULL; // NULL��ָ��
    else
        return string;
}