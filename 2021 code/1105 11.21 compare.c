// �ó��������������
#include <stdio.h>
#include <string.h> // strcmp()������ԭ���ڸ�ͷ�ļ��У����ڱȽ��ַ���������Ƚ�����һ������ͬ����0
#define ANSWER "Grant"
#define SIZE 40
char * s_gets(char * st, int n) 
{
    char try[SIZE];
    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);
    while (strcmp(try, ANSWER) != 0)
    {
        puts("No, that's wrong. Try again.");
        s_gets(try, SIZE);
    }
    puts("That's right!");
    return 0;
}
char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;
    ret_val = fgets(st, n, stdin)
    /*
    fgets()����ͨ����2���������ƶ�����ַ����������������⡣�ú���ר��������ڴ����ļ�����
    fgets()�����ĵ�2������ָ���˶����ַ����������������ò�����n����ôfgets()������n-1���ַ�
    ���߶��������ĵ�һ�����з�Ϊֹ
    ���fgets()������һ�����з���������洢���ַ����С������gets()��ͬ��gets()�ᶪ�����з�
    fgets()�����ĵ�3������ָ��Ҫ������ļ����������Ӽ�����������ݣ�����stdin����׼���룩��Ϊ�������ñ�ʶ��������stdio.h��
    ��Ϊfgets()�����ѻ��з������ַ���ĩβ�����������в��������ͨ��Ҫ��fputs()�������ʹ�ã����Ǹú��������ַ���ĩβ��ӻ��з�
    fputs()�����ĵ�2������ָ����Ҫд����ļ������Ҫ��ʾ�ڼ������ʾ���ϣ�Ӧʹ��stdout����׼�������Ϊ�ò���
    */
   

}