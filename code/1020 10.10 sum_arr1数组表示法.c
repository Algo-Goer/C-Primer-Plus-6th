/*
 * @Author: your name
 * @Date: 2021-10-20 20:32:47
 * @LastEditTime: 2021-10-20 20:54:56
 * @LastEditors: Please set LastEditors
 * @Description: 该程序打印原始数组大小、表示该数组的函数形参的大小。数组元素之和
 * @FilePath: \.vscode\C\1020 10.10 sum_arr1.c
 */
//如果编译器不支持用转换说明%zd打印sizeof返回值，可用%u或%lu代替。
//在编写函数时可以选择用数组表示法或者指针表示法。但这里使用数组表示法，让函数是处理数组的这一目标更明显。
#include <stdio.h>
#define SIZE 10
int sum(int ar[], int n);
int main(void)
{ //marbles是一个数组，ar是一个指向marbles数组首元素的指针
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;
    answer = sum(marbles, SIZE);
    printf("The total number of marbles is %ld.\n", answer);
    printf("The size of marbles is %zd bytes.\n", sizeof marbles);
    return 0;
}
int sum(int ar[], int n)
{
    int i;
    int total = 0;
    for (i = 0; i < n; i++)
        total += ar[i];
    printf("The size of ar is %zd bytes.\n", sizeof ar);
    return total;
}
