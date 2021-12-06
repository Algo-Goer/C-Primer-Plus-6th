/* 
 * 初始化一个double类型的二维数组，用编程练习2中的一个拷贝函数把该数组中的
 * 数据拷贝至另一个二维数组中（因为二维数组时数组的数组，所以可使用处理一维
 * 数组的拷贝函数来处理数组中的每个子数组 
 */
// 数组表示法
#include <stdio.h>
#define ROW 3
#define COL 2
void copy_arr(double target[][COL], const double source[][COL], int x, int y);

void copy_arr(double target[][COL], const double source[][COL], int x, int y)
{
    printf("The copy of the data is: \n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            target[i][j] = source[i][j];
            printf("%.2lf\t", target[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    const double source[ROW][COL] = {{1, 3}, {8, 8}, {5, 2}};
    // 保护数组不被改变————如果编写的函数不用修改数组，那么在声明数组形参时最好使用const
    double target[ROW][COL];
    copy_arr(target, source, ROW, COL);
    return 0;
}