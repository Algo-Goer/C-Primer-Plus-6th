// ���û�����Ӧ���Ѵ洢���ַ������Ƚ�
// �ó����Ƿ����������У�
#include <stdio.h>
#define ANSWER "Grant" // ANSWER��try����ָ��
#define SIZE 40
char *s_gets(char *st, int n);
int main(void)
{
    char try[SIZE];
    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);
    while (try != ANSWER) 
    /*
    ANSWER��try����ָ�롣�þ���Ĳ��������ַ����Ƿ���ȣ������������ַ����ĵ�ַ�Ƿ����
    ��ΪANSWER��try�洢�ڲ�ͬλ�ã�������������ַ��������ͬ����ˣ������û�����ʲô
    ������ʾ���벻��ȷ
    �ú���Ҫ�Ƚϵ����ַ������ݶ��ǵ�ַ��������C��׼���е�strcmp()�����������ַ����Ƚϣ�
    �ú���ͨ���Ƚ���������Ƚ��ַ���������Ƚ�����һ��
    ��������ַ���������ͬ���ú����ͷ���0�����򷵻ط�0.�޸ĺ�汾��11.21.c
    */
    {
        puts("No, that's wrong. Try again.");
        s_gets(try, SIZE);
    }
    puts("That's right!");
    return 0;
}
char *s_gets(char *st, int n)
{
    char *ret_val;
    int i = 0;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}