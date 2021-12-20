/*  变长数组（VLA）和调用malloc()在功能上有些重合。
例如，两者都可以用于创建在运行时确定大小的数组 */
int vlamal()
{
    int n;
    int *pi;
    scanf("%d", &n);
    pi = (int *)malloc(n * sizeof(int));
    int ar[n]; // 变长数组
    pi[2] = ar[2] = -5;
    ...
}
