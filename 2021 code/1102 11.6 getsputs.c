/* 
gets()������ȡ�������룬ֱ���������з���Ȼ�������з����洢�����ַ���������Щ�ַ�ĩβ���һ�����ַ�
ʹ���Ϊһ��C�ַ���
gets()������puts()�������ʹ�ã�������ʾ�ַ���������ĩβ��ӻ��з�
*/
#include <stdio.h>
#define STLEN 81
int main(void)
{
    char words[STLEN];
    puts("Enter a string, please.");
    gets(words); // �����÷����������루���˻��з��������洢��words��
    printf("Your string twice:\n");
    printf("%s\n", words);
    puts(words);   // puts(words)��printf("%s\n", words);Ч����ͬ
    puts("Done.");
    return 0;
}
