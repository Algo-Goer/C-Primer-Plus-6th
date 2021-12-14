// ��strcmp()�����������Ƿ�Ҫֹͣ��ȡ����
// quit_chk.c -- ĳ����ʼ����
#include <stdio.h>
#include <string.h>
#define SIZE 80
#define LIM 10
#define STOP "quit"            // �ַ���������or�ַ�������
char *s_gets(char *st, int n); // ����ԭ�ͣ������Ǽӷֺ�

int main(void)
{
    char input[LIM][SIZE];
    int ct = 0;

    printf("Enter up to %d lines (type quit to quit):\n", LIM);
    while (ct < LIM && s_gets(input[ct], SIZE) != NULL && strcmp(input[ct], STOP) != 0)
    {
        ct++;
    }
/* 
��ʱ������У�������Enter��Return����ʾ������������㡣ֻ���޸�whileѭ���������ɣ�
```c
while (ct < LIM && s_gets(input[ct], SIZE) != NULL && input[ct][0] != '\0')
```
*/
    printf("%d strings entered\n", ct);
    return 0;
}

char *s_gets(char *st, int n)
{
    char *ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin); //��ָ������ stream ��ȡһ�У��������洢�� str ��ָ����ַ����ڡ�����ȡ (n-1) ���ַ�ʱ�����߶�ȡ�����з�ʱ�����ߵ����ļ�ĩβʱ������ֹͣ�����������������
    // string.h
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