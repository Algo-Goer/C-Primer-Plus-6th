// string.hͷ�ļ��а�����C�ַ�������ϵ�е�ԭ��
// ������fit()��ʹ�������ַ������ȵĺ�����ʹ����C�ַ��������Ĵ������ԡ�
#include <stdio.h>
#include <string.h> // �ں��ַ�������ԭ��
void fit(char *, unsigned int);
int main(void)
{
    char mesg[] = "Things should be as simple as possible,"
                  "but not simpler.";
    puts(mesg);
    fit(mesg, 38);
    puts(mesg);  
    puts("Lets's look at some more of the string.");
    puts(mesg + 39);   // mesg[39]�ĵ�ַ���õ�ַ�ϴ洢���ǿո��ַ�������puts()��ʾ���ַ����������ֱ������ԭ���ַ����еĿ��ַ�
    return 0;
}
void fit(char *string, unsigned int size)
{
    if (strlen(string) > size)
        string[size] = '\0';   // fit()�����ѵ�39��Ԫ�صĶ����滻��'\0'
}