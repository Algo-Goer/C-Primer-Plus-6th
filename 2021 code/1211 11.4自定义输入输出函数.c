// ����һ��put1()��put2()������������ӡ�Ŀ⺯�����Ƚ�
#include <stdio.h> 
void put1(const char *string); 
int put2(const char *string);
 
int main(void) 
{
    int num = 0;
    put1("pizza");   // �Զ��壬���ӻ��з�
    putchar("pizza");  // �⺯�����Զ��ӻ��з�
    puts("pizza");     // �⺯�����Զ��ӻ��з�
    num = put2("pizza");
    printf("%d\n", num);
}

void put1(const char *string)    // ��ӡ�ַ����������\n
{
    while (*string != '\0')
        putchar(*string++);
}

int put2(const char *string)     // ��ӡһ���ַ�������ͳ�ƴ�ӡ���ַ���
{
    int count = 0;
    while (*string) // �����÷�  ��stringָ����ַ�ʱ��*stringֵΪ0������������Ϊ�٣�whileѭ������
    {
        putchar(*string++);
        count++;
    }
    putchar('\n'); // ��ͳ�ƻ��з�
    return (count);
}