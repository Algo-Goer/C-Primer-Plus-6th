// ֻ��ָ���ʾ�����Խ��е�������
// ָ��ӷ������������ʾ����ָ���ʾ������
#include <stdio.h>

int main(void)
{
    char heart[] = "I love you!";
    const char *head = "I love you!";

    for (int i = 0; i < 6; i++)
        putchar(*(heart + i));
    putchar('\n');
    for (int i = 0; i < 6; i++)
        putchar(*(head + i));
    putchar('\n');

    while (*(head) != '\0')   // ���ַ���ĩβ��ֹͣ
        putchar(*(head++));   // ��ӡ�ַ���ָ��ָ����һ��λ��
    
    head = heart;      // head����ָ������heart����ʹ��headָ��ָ��heart�������Ԫ��
    
}