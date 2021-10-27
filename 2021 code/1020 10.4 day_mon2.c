/*
 * @Author: your name
 * @Date: 2021-10-20 18:52:03
 * @LastEditTime: 2021-10-22 15:48:46
 * @LastEditors: Please set LastEditors
 * @Description: 可以省略方括号中的数字，让编译器自动匹配数组大小和初始化列表中的项数，让编译器计算元素个数
 * @FilePath: \.vscode\C\1020 10.4 day_mon2.c
 */
#include <stdio.h>
int main(void)
{
    const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31};  //使用const关键字保护数组
    int index;
    for (index = 0; index < sizeof(days) / sizeof(days[0]); index++)
        printf("Month %2d has %d days.\n", index + 1, days[index]);
    return 0;
    /*在 C 语言中，sizeof() 是一个判断数据类型或者表达式长度的运算符。
    注意for循环中的测试条件。由于人工计算容易出错，所以让计算机来计算数组大小。
    sizeof运算符给出它的运算对象大小（以字节为单位），sizeofdays[0]是数组中一个元素的大小（以字节为单位）。
    整个数组的大小除以单个元素的大小就是数组元素个数。
    本意是防止初始化值的个数超过数组的大小，让程序找出数组大小。
    */
}
