// ʹ��fgets()
// �������̫����������������ɵ��ַ���ʱ������붪�������еĳ����ַ�
#include <stdio.h>
#define STLEN 10
int main(void)
{
    char words[STLEN];
    int i;
    puts("Enter strings (empty line to quit): ");
    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
    {
        i = 0;
        while (words[i] != '\n' && words[i] != '\0')
            i++;
        if (words[i] == '\n')
            words[i] = '\0';  // ���ַ����ڱ��C�ַ���ĩβ���ַ�����Ӧ�ַ�������0
        else // ���words[i] == '\0'��ִ���ⲿ�ִ���
            while (getchar() != '\n')
                continue;
        puts(words);
    }
    puts("done");
    return 0;
}
// ��ָ�루��NULL����һ��ֵ����ֵ�������κ����ݵ���Ч��ַ��Ӧ