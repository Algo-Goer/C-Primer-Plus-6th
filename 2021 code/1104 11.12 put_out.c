#include <stdio.h>
#define DEF "I am a #defined string."
int main(void)
{
    char str1[80] = "An array was initialized to me.";  // �洢�ַ������������ǵ�ַ
    const char * str2 = "A pointer was initialized to me.";
    puts("I'm an argument to puts().");  // ��˫�������������������ַ����������ұ���Ϊ���ַ����ĵ�ַ
    puts(DEF);
    puts(str1);   // puts()����ʾ�ַ���ʱ���Զ�����ĩβ���һ�����з�
    puts(str2);
    puts(&str1[5]);    // ���ʽ&str1[5]��str1����ĵ�6��Ԫ��(r),puts()�Ӹ�Ԫ�ؿ�ʼ���
    puts(str2 + 4);    // puts()�������������ַ�ʱ��ֹͣ��������Ա���ȷ���п��ַ�
    return 0;
}