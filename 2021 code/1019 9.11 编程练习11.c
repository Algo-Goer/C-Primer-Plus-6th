/*
 * @Author: 106APrimer
 * @Date: 2021-10-19 23:34:39
*/
//��ѭ������ݹ����쳲�������
//쳲���������ָ��������һ�����У�0��1��1��2��3��5��8��13��21��34
//F(0) = 0��F(1) = 1, F(n) = F(n - 1) + F(n - 2)��n >= 2��n��N*��
#include <stdio.h>
int Fibonacci(int n);
int get_int(void);
int main(void)
{
    int n, i;
    printf("Please enter the No. (<0 to quit) :\n");
    n = get_int();
    while (n > 0)
    {
        for (i = 1; i <= n; i++)
        {
            printf("%d ", Fibonacci(i));
        }
        printf("\n");
        n = get_int();
    }
    printf("Done.\n");
    return 0;
}
int Fibonacci(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else if (n >= 3)
    {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}
int get_int(void)
{
    int x;
    while ((scanf("%d", &x)) != 1)
    {
        scanf("%*s");   //����Ҫ�����ƣ���ֹ�����������a������ĻƵ����ӡ������仰�޷�ֹͣ��
        printf("Please enter an integer number(>0):\n");
    }
    while (getchar() != '\n')
        continue;  
    return x;
}