/* 
��2�ַ��������Է��ú����޸��ַ�������������ʹ�÷���ֵ�ı��ַ�����
���ʽ(char *)string����Ϊ��ͨ��ǿ������ת��ȡ��const��
*/
#include <stdio.h>
char * strblk(const char * string)
{
    while (*string != ' ' && *string != '\0')
      string++;  // �ڵ�1���հ׻���ַ���ֹͣ
      // Ϊʲô�ǻ�
    if (*string == '\0')
      return NULL;  
    else
      return (char *)string;
}