/*
 * @Author: your name
 * @Date: 2021-10-20 20:39:43
 * @LastEditTime: 2021-10-20 20:49:20
 * @LastEditors: Please set LastEditors
 * @Description: 数组元素之和
 * @FilePath: \.vscode\C\1020 10.11 sum_arr2.c
 */
#include <stdio.h>
#define SIZE 10
int sump(int *start, int *end);
int main(void)
{
    int marbles[SIZE] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20 };
    long answer;
    answer = sump(marbles, marbles + SIZE);
    printf("The total number of marbles is %ld.\n", answer);
    return 0;
}
/*使用指针算法*/
int sump(int *start, int *end)
{
    int total = 0;
    while (start < end)  //用第2个指针来结束循环
    {
        total += *start; //把数组元素值加起来  
        //指针start开始指向marbles数组的首元素，所以赋值表达式total += *start把首元素（20）加给total
        start++;         //把指针指向下一个元素。因为start是指向int的指针，start递增1相当于其值递增int类型的大小
    }
    return total;
}