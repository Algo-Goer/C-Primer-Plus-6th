// ��strchr()�����������е�whileѭ�������һ��з�
#include <stdio.h>  // �ṩfgets()��getchar()ԭ��
#include <string.h> // �ṩstrchr()��ԭ��

char *s_gets(char *st, int n)
{
    char *ret_val;
    char *find;
    // int i = 0;
    ret_val = fgets(st, n, stdin);
    if (ret_val) // ��ret_val != NULL
    {
        find = strchr(st, '\n'); // ���һ��з�
        if (find)                // �����ַ����NULL
            *find = '\0';        // �ڴ˴�����һ�����ַ�
        else
            while (getchar() != '\n')
                continue;
    }
    /* 
���getchar()!='\n'����һ��������getchar()ȡ��������ַ���
�������ַ����ǻ��з�����ô����ֵΪ1��
ִ��continue�����ص�while������ô�ɣ�
��ִ���������з������˳�����whileѭ����������з���֮���ˡ�
��ô�������������ã�Ӧ���Ƕ�ȡ���л��з�ǰ�������ַ��ɡ�
*/

    return ret_val;
}

/*
fgets(words, STLEN, stdin);
fgets������2������ָ���˶����ַ����������������ò���ֵ��n����ôfgets()������n-1���ַ�������
���������ĵ�һ�����з�Ϊֹ��
���fgets()����һ�����з���������洢���ַ����С������gets()��ͬ��gets()�ᶪ�����з���
fgets()�����ĵ�3������ָ��Ҫ������ļ����������Ӽ�����������ݣ�����stdin(��׼����)��Ϊ������
�ñ�ʶ��������stdio.h��
*/

/* 
11.10 s_gets()�Զ��庯��
#include <stdio.h>

char *s_gets(char *st, int n)
{
    char *ret_val;
    int i = 0;
    ret_val = fgets(st, n, stdin);
    if (ret_val) // ��ret_val != NULL
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';  // ����ַ����г��ֻ��з������ÿ��ַ��滻
        else
            while (getchar() != '\n')  // ����ַ����г��ֿ��ַ����Ͷ��������е������ַ���Ȼ�󷵻���fgets()��ֵͬ
                continue;
    }
    return ret_val;
}
*/