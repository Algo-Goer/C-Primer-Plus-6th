/*
 * @Author: your name
 * @Date: 2021-10-20 18:45:02
 * @LastEditTime: 2021-10-20 18:48:10
 * @LastEditors: Please set LastEditors
 * @Description: 初始化数组失败。由于未初始化，编译器使用的值是内存相应位置上现有的值
 * @FilePath: \.vscode\C\1020 10.2  no_data.c
 */
#include <stdio.h>
#define SIZE 4
int main(void)
{
    int no_data[SIZE]; //未初始化数组
    int i;
    printf("%2s%14s\n", "i", "no_data[i]");
    for (i = 0; i < SIZE; i++)
        printf("%2d%14d\n", i, no_data[i]);
    return 0;
}
