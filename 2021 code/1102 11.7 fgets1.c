/*
fgets()�����ѻ��з������ַ���ĩβ�����������в��������ͨ��Ҫ��fputs()�������ʹ�ã�
���Ǹú��������ַ���ĩβ��ӻ��з���fputs() �����ĵ�2������ָ����Ҫд����ļ���
���Ҫ��ʾ�ڼ������ʾ���ϣ�Ӧʹ��stdout(��׼���)��Ϊ�ò���
*/
// ʹ��fets()��fputs()
#include <stdio.h>
#define STLEN 14
int main(void)
{
    char words[STLEN];
    puts("Enter a string, please.");
    fgets(words, STLEN, stdin);
    /* 
    fgets������2������ָ���˶����ַ����������������ò���ֵ��n����ôfgets()������n-1���ַ�������
    ���������ĵ�һ�����з�Ϊֹ��
    ���fgets()����һ�����з���������洢���ַ����С������gets()��ͬ��gets()�ᶪ�����з���
    fgets()�����ĵ�3������ָ��Ҫ������ļ����������Ӽ�����������ݣ�����stdin(��׼����)��Ϊ������
    �ñ�ʶ��������stdio.h��
    */
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);  // ��puts()��ʾ���ַ���ʱ����ĩβ����˻��з�
    fputs(words, stdout); // ��Ϊfputs()�����ַ���ĩβ��ӻ��з�������δ��ӡ������
    puts("Enter another string, please."); 
    fgets(words, STLEN, stdin);  
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words, stdout);
    puts("Done.");
    return 0;
}