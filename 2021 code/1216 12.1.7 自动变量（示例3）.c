/*
��ʾ��3�У�������4������������
main()�е�Hocus����Ĭ�����Զ�����������main()˽�С�
magic()�е�Hocus��������ʽ����Ϊ�Զ���ֻ��magic()���á�
�ⲿ����Hocus��main()��magic()�����ɼ������ǶԸ��ļ���δ�����ֲ�Hocus���������������ɼ���
���Pocus���ⲿ������magic()�ɼ�������main()���ɼ�����ΪPocus��������main()���档
*/
int Hocus;
int magic();
int main(void)
{
    int Hocus;   // ����Hocus��Ĭ�����Զ�����������main()˽�С�
    ...
}
int Pocus; 
int magic()
{
    auto int Hocus; // �Ѿֲ�����Hocus��ʽ����Ϊ�Զ�������ֻ��magic()����
    ...
}