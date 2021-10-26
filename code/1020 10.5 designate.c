/*
 * @Author: your name
 * @Date: 2021-10-20 19:02:14
 * @LastEditTime: 2021-10-20 19:03:21
 * @LastEditors: Please set LastEditors
 * @Description: 使用指定初始化器
 * @FilePath: \.vscode\C\1020 10.5 designate.c
 */
#include <stdio.h>
#define MONTHS 12
int main(void)
{
    int days[MONTHS] = {31, 28, [4] = 31, 30, 31, [1] = 29};
    int i;
    for (i = 0; i < MONTHS; i++)
        printf("%2d %d\n", i + 1, days[i]);
    return 0;
}
