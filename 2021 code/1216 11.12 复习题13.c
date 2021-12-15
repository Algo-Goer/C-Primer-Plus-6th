/*
��д11.21.c��ʹ��ctype.hͷ�ļ��еĺ������Ա������û�ѡ���д����Сд��
�ó�������ȷʶ���
*/

#include <stdio.h>
#include <string.h>   // fgets()
// strcmp()������ԭ���ڸ�ͷ�ļ��У����ڱȽ��ַ���������Ƚ�����һ������ͬ����0
#include <ctype.h>  // toupper()

#define ANSWER "GRANT"  // �ĳ���ȫ��д
#define SIZE 40
char * s_gets(char * st, int n);
void ToUpper(char * str);  // ����

int main(void)
{
    char try[SIZE];

    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);
    ToUpper(try);
    while (strcmp(try, ANSWER) != 0)  // strcmp()
    {
        puts("No, that's wrong. Try again.");
        s_gets(try, SIZE);
        ToUpper(try);
    }
    puts("That's right!");

    return 0;
}

void ToUpper(char * str)
{
    while (*str != '\0')
    {
        *str = toupper(*str);
        str++;
    }
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
                continue;  // һ���лس�������
    }
    return ret_val;
}

/*  
11.21 -- compare.c

#include <stdio.h>
#include <string.h> 
strcmp()������ԭ���ڸ�ͷ�ļ��У����ڱȽ��ַ���������Ƚ�����һ������ͬ����0

#define ANSWER "Grant"
#define SIZE 40
char * s_gets(char * st, int n);

int main(void)
{
    char try[SIZE];

    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);
    while (strcmp(try, ANSWER) != 0)  // strcmp()
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

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
             i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;  // һ���лس�������
    }
    return ret_val;
}
*/