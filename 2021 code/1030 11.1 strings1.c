#include <stdio.h>
#define MSG "I am a symbolic string constant."  // �ַ�������--�����ַ���
#define MAXLENGTH 81
int main(void)
{
    char words[MAXLENGTH] = "I am a string in an array.";
    const char * pt1 = "Something is pointing at me.";
    puts("Here are some strings:");
    puts(MSG); // puts����Ҳ����stdio.hϵ�е����������������puts()ֻ��ʾ�ַ����������Զ���ĩβ�ӻ��з�
    puts(words); // char��������--�����ַ���
    puts(pt1);   //  ָ��char��ָ��--�����ַ���
    words[8] = 'p';
    puts(words);
    return 0;
}
