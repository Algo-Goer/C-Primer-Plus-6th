/*
 * @Author: your name
 * @Date: 2021-10-20 19:10:14
 * @LastEditTime: 2021-10-20 19:13:35
 * @LastEditors: Please set LastEditors
 * @Description: 数组下标越界。创建了内含4个元素的数组，然后错误使用了-1~6的下标
 * @FilePath: \.vscode\C\1020 10.6 bounds.c
 */
#include <stdio.h>
#define SIZE 4
int main(void)
{
    int value1 = 44;
    int arr[SIZE];
    int value2 = 88;
    int i;
    printf("value 1 = %d, value 2 = %d\n", value1, value2);
    for (i = -1; i <= SIZE; i++)
        arr[i] = 2 * i + 1;
    for (i = -1; i < 7; i++)
        printf("%2d %d\n", i, arr[i]);
    printf("value1 = %d, value2 = %d\n", value1, value2);
    printf("address of arr[-1]: %p\n", &arr[-1]);
    printf("address of arr[4]: %p\n", &arr[4]);
    printf("address of value1: %p\n", &value1);
    printf("address of value2: %p\n", &value2);
    return 0;
}