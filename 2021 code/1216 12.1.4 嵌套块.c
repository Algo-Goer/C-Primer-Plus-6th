/* 
Ƕ�׿�
���������ı��������ڸÿ鼰������Ŀ�ʹ��
*/
int loop(int n)
{
    int m;  // m��������
    scanf("%d", &m);
    {
        int i;  // m��i��������
        for (i = m; i < n; i++)
          puts("i is local to a sub-block\n");
    }
    return m;  // m��������i�Ѿ���ʧ
}