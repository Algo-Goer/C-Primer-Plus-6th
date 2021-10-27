/*
 * @Author: your name
 * @Date: 2021-10-20 18:38:45
 * @LastEditTime: 2021-10-20 18:44:18
 * @LastEditors: Please set LastEditors
 * @Description: 打印每个月的天数
 * @FilePath: \.vscode\C\1020 10.1 day_mon1.c
 */
#include <stdio.h>
#define MONTHS 12
int main(void)
{
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    /*创建只读数组，用const声明和初始化数组：
    const int days[MONTHS] = 
    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    */
    //一旦用const，就不能给它再赋值
    int index;
    for (index = 0; index < MONTHS; index++)
        printf("Month %2d has %2d days.\n", index + 1, days[index]);
        //%2d:数字按宽度为2，采用右对齐方式输出，若数据位数不到2位，则左边补空格
    return 0;
}