// strcnvt.c -- ʹ��strtol()
/* ��ANSI C��ʼ��stdlib.hͷ�ļ��а�����atoi()����ԭ��-���ַ���ת��Ϊ����ֵ��
����֮�⣬��������atof()��atol()������ԭ�͡�
atof()�������ַ���ת����double���͵�ֵ��atol()�������ַ���ת����long���͵�ֵ��
atof()��atol()�Ĺ���ԭ���atoi()���ƣ�������Ƿֱ𷵻�double���ͺ�long���͡�

ANSI C���ṩһ�׸����ܵĺ�����
strtol()���ַ���ת����long���͵�ֵ��strtoul()���ַ���ת����unsigned long���͵�ֵ��
strtod()���ַ���ת����double���͡�
��Щ����������֮������ʶ��ͱ����ַ����е����ַ��Ƿ������֡�
���ң�strtol()��strtoul()������ָ�����ֵĽ��ơ� 

strtol()����ԭ�ͣ�
```c
long strtol(const char * restrict nptr, char ** restrict endptr, int base);
```
����,nptr��ָ���ת���ַ�����ָ�룬endptr��һ��ָ��ĵ�ַ����ָ�뱻����Ϊ��ʶ
�������ֽ����ַ��ĵ�ַ��base��ʾ��ʲô����д�����֡� */

// 11.33 strcnvt.c -- ʹ��strtol()
#include <stdio.h>
#include <stdlib.h>
#define LIM 30
char *s_gets(char *st, int n);

int main()
{
    char number[LIM];
    char *end;
    long value;  // %ld ���long����

    puts("Enter a number (empty line to quit): ");
    while (s_gets(number, LIM) && number[0] != '\0')
    {
        value = strtol(number, &end, 10); // ʮ����
        printf("base 10 input, base 10 output: %ld, stopped at %s (%d)\n", value, end, *end);
        value = strtol(number, &end, 16); // ʮ������
        printf("base 16 input, base 10 output: %ld, stopped at %s (%d)\n", value, end, *end);
        puts("Next number:"); 
/* ��baseΪ16ʱ,'a'�ַ���ʶ��Ϊһ����Ч��ʮ����������strtol()������ʮ��������10a
ת����ʮ������266 */
    }
    puts("Bye!\n");

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