double blocky(double cleo)
{
    double patrick = 0.0;
    int i;
    for (i = 0; i < 10; i++)
    {
        double q = cleo * i; // q��������ʼ
        ...
        patrick *= q; 
    }    // q�����������
    ...
    return patrick;
}
/* 
����for��ѭ��ͷ��C99�ſ���������д��
for (int i = 0; i < 10; i++)
   printf("A C99 feature: i = %d", i);
���п�������ı�����һ�����������ڿ鿪ͷ��
*/