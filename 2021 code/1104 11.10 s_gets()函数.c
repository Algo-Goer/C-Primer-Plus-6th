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