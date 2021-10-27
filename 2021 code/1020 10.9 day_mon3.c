/*
 * @Author: your name
 * @Date: 2021-10-20 20:12:08
 * @LastEditTime: 2021-10-20 20:16:22
 * @LastEditors: Please set LastEditors
 * @Description: uses pointer notation
 * @FilePath: \.vscode\C\1020 10.9 day_mon3.c
 */
#include <stdio.h>
#define MONTHS 12
int main(void)
{
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
    /*days是数组首元素的地址，days + index是元素days[index]的地址，而*(days + index)则是该元素的值，
    相当于days[index]。
    */    
    int index;
    for (index = 0; index < MONTHS; index++)
        printf("Month %2d has %d days.\n", index + 1, *(days + index)); //指针表示法
    //与days[index]相同
    return 0;
}
/* 
10.1.c
for (index = 0; index < MONTHS; index++)
        printf("Month %2d has %2d days.\n", index + 1, days[index]); //数组表示法
*/