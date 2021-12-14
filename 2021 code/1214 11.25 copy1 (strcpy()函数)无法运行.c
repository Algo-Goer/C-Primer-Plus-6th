#include <stdio.h>
#include <string.h> // strcpy()��ԭ����string.hͷ�ļ���
#define SIZE 40
#define LIM 5
char * s_gets(char *st, int n);

int main(void)
{
    char qwords[LIM][SIZE];
    char temp[SIZE];
    int i = 0;

    printf("Enter %d words beginning with q:\n", LIM);
    while (i < LIM && s_gets(temp, SIZE))
    {
        if (temp[0] != 'q')
            printf("%s doesn't begin with q!\n", temp);
        else
        {
            strcpy(qwords[i], temp); 
/*
strcpy()�ĵ�2������tempָ����ַ�������������1������(qword[i])ָ��������С�
�����������ַ�������Ϊtarget�ַ�����������ַ�������Ϊsource�ַ�����
strcpy()����˳�򣺵�1����target�ַ�������2����source�ַ���
*/
            
/* 
Ҳ����ͨ���Ƚ��ַ��������жϣ�
```c
if (strncmp(temp, "q", 1) != 0)
temp�ַ�����q�ĵ�һ��Ԫ���Ƿ����
```
*/
            i++;   // ֻ����������q��ͷ�ĵ��ʺ�Ż����������i
        }
    }
    puts("Here are the words accepted: ");
    for (i = 0; i < LIM; i++)
        puts(qwords[i]);

    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
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
