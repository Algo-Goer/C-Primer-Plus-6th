/*  �䳤���飨VLA���͵���malloc()�ڹ�������Щ�غϡ�
���磬���߶��������ڴ���������ʱȷ����С������ */
int vlamal()
{
    int n;
    int *pi;
    scanf("%d", &n);
    pi = (int *)malloc(n * sizeof(int));
    int ar[n]; // �䳤����
    pi[2] = ar[2] = -5;
    ...
}
