/*
����3��ʾ�����ⲿ����1-3����ʾ���ⲿ���Զ�������һЩʹ�������
ʾ��1����һ���ⲿ����Hocus���ñ�����main()��magic()���ɼ���
*/
int Hocus; // �ⲿ����Hocus
int magic();
int main(void)
{
    extern int Hocus; // Hocus ֮ǰ������Ϊ�ⲿ����
    ...
}
int magic()
{
    extern int Hocus; // �������Hocus��ͬһ������
    ...
}
