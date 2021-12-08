// 数组表示法
#include <stdio.h>
#define N 4

void show(int n, const int ar[]);
void addup(int target[], const int arr1[], const int arr2[], int n);

void show(int n, const int ar[])
{
    for (int i = 0; i < n; i++)
        printf("%d ", ar[i]);
    putchar('\n');
}

void addup(int target[], const int arr1[], const int arr2[], int n)
{
    for (int i = 0; i < n; i++)
        target[i] = arr1[i] + arr2[i];
}

int main(void)
{
    const int array1[N] = {2, 4, 5, 8};
    const int array2[N] = {1, 0, 4, 6};
    int target[N];
    printf("Array1:\n");
    show(N, array1);
    printf("Array2:\n");
    show(N, array2);
    printf("Array1 + Array2:\n");
    addup(target, array1, array2, N);
    show(N, target);

    return 0;
}