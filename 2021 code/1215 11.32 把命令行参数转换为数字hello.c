// hello.c -- �������в���ת��Ϊ����
// ������cmd�����ˣ���.exe�ļ�����C�̵�xuebi�ļ����¼���

#include <stdio.h>
#include <stdlib.h> 
// ��ANSI C��ʼ��stdlib.hͷ�ļ��а�����atoi()����ԭ��
// system("pause");
int main(int argc, char *argv[])
{
    int i, times;

    if (argc < 2 || (times = atoi(argv[1])) < 1)
/* atoi()�����������в���������3�����洢Ϊ�ַ���3\0
atoi()�����Ѹ��ַ���ת��Ϊ����ֵ3��Ȼ�󸳸�times����ֵȷ����ִ��forѭ���Ĵ�����
������иó���ʱû���ṩ�����в�������ôargc<2Ϊ�棬�������һ����ʾ��Ϣ�������
���timesΪ0����Ҳ����ˡ�C�����߼����������ֵ˳��֤�����argc<2���Ͳ����
atoi(argv[1])��ֵ */
/* ����ַ�������������ͷ��atoi()����Ҳ�ܴ�����ֻ�ѿ�ͷ������ת��Ϊ�ַ���
����atoi("42regular")����������42��*/
        printf("Usage: %s positive-number\n", argv[0]);
    else
        for (i = 0; i < times; i++)
            puts("Hello, good looking!");
    
    system("pause");
    return 0;
}