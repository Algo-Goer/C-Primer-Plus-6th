// �޸��ַ���
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LIMIT 81
void ToUpper(char *);
int PunctCount(const char *);

int main(void)
{
    char line[LIMIT];
    char *find;

    puts("Please enter a line:");
    fgets(line, LIMIT, stdin);
    find = strchr(line, '\n'); // ��ȡһ��������һ��з�
    if (find)                  // �����ַ����NULL
        *find = '\0';          // �ÿ��ַ��滻
/* �ó�����fgets()��strchr()��ϣ���ȡһ�����벢�ѻ��з��滻�ɿ��ַ���
���ַ�����ʹ��s_gets()����s_gets()�ᴦ��������ʣ���ַ������У���
Ϊ��һ����������׼����������ֻ��һ��������䣬��û��Ҫ���ж��ಽ�� */
    ToUpper(line);
    puts(line);
    printf("That line has %d punctuation characters.\n", PunctCount(line));
    return 0;
}

void ToUpper(char *str)
{
    while (*str) 
/* while (*str)ѭ������strָ����ַ����е�ÿ���ַ���ֱ���������ַ���
��ʱ*strֵΪ0�����ַ��ı���ֵΪ0������ѭ������Ϊ�٣�ѭ�������� */
    {
        *str = toupper(*str);
        str++;
    }
}

int PunctCount(const char *str)
{
    int ct = 0;
    while (*str)  
/* while (*str)ѭ������strָ����ַ����е�ÿ���ַ���
ֱ���������ַ�����ʱ*strֵΪ0�����ַ��ı���ֵΪ0������ѭ������Ϊ�٣�ѭ��������*/
    {
        if (ispunct(*str))
            ct++;
        str++;
    }

    return ct;
}