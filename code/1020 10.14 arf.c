/*
 * @Author: your name
 * @Date: 2021-10-22 15:42:29
 * @LastEditTime: 2021-10-22 15:47:41
 * @LastEditors: Please set LastEditors
 * @Description: 处理数组的函数
 * @FilePath: \.vscode\C\1020 10.14 arf.c
 */
#include <stdio.h>
#define SIZE 5
void show_array(const double ar[], int n);  
void mult_array(double ar[], int n, double mult); //更新dip数组的值
int main(void)
{
    double dip[SIZE] = { 20.0, 17.66, 8.2, 15.3, 22.22 };
    printf("The original dip array:\n");
    show_array(dip, SIZE);
    mult_array(dip, SIZE, 2.5);
    printf("The dip array after calling mult_array():\n");
    show_array(dip, SIZE);
    return 0;
}
/*显示数组内容*/
void show_array(const double ar[], int n)
{
    int i;
    for (i = 0; i < n; i++)
         printf("%8.3f ", ar[i]);
    putchar('\n');
}
/*把数组的每个元素都乘以相同的值*/
void mult_array(double ar[], int n, double mult)
{
    int i;
    for (i = 0; i < n; i++)
       ar[i] *= mult;   //虽然mult_array()更新dip数组的值，但并未使用return机制
}