// ʹ�þֲ���̬����
#include <stdio.h>
void trystat(void);

int main(void)
{
    int count;

    for (count = 1; count <= 3; count++)
    {
        printf("Here comes iteration %d:\n", count);
        trystat();
    }

    return 0;
}

void trystat(void)
{
    int fade = 1;
    static int stay = 1;

    printf("fade = %d and stay = %d\n", fade++, stay++);
}
/*
�ȴ�ӡ�ٵ�������ֵ��
��̬����stay��������������1���ֵ������fade����ÿ�ζ���1��
������˳�ʼ����ͬ��ÿ�ε���trystat()�����ʼ��fade��
����stayֻ�ڱ���trystat()ʱ����ʼ��һ�Ρ�
���δ��ʽ��ʼ����̬���������ǻᱻ��ʼ��Ϊ0��
*/
  