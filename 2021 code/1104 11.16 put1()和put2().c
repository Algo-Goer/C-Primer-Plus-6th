// ʹ��һ���򵥵������������put1()��put2()������ʾ��Ƕ�׺��������
#include <stdio.h>
void put1(const char *);
int put2(const char *);
int main(void)
{
    put1("If I'd as much money");
    put1(" as I could spend.\n");
    printf("I count %d character.\n", put2("I never would cry old chairs to mend."));
    /*
    ������ʹ��printf()��ӡput2()��ֵ������Ϊ�˻��put2()�ķ���ֵ�������������ִ��put2()
    ����ڴ�ӡ�ַ���֮ǰ�ȴ�ӡ�˴��ݸ��ú������ַ���
    return 0; 
    */
}

void put1(const char *string)
{
    while (*string) //  ��*string != '\0'��ͬ
        putchar(*string++);
}
int put2(const char *string)
{
    int count = 0;
    while (*string)
    {
        putchar(*string++);
        count++;
    }
    putchar('\n');
    return (count);
}
