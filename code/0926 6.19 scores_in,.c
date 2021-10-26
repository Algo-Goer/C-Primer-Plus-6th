//使用循环处理数组
#include <stdio.h>
#define SIZE 10  //用#define指令创建的明示常量（SIZE）来指定数组大小。这样可以在定义数组和设置
//循环边界时使用该明示常量
#define PAR 72
int main(void) 
{
    int index, score[SIZE];
    int sum = 0;
    float average;
    printf("Enter %d golf scores:\n",SIZE);
    for (index = 0; index < SIZE; index++) 
         scanf("%d", &score[index]);     //读取10个分数
    printf("The scores read in are as follows:\n");
    for (index = 0; index < SIZE; index++)
         printf("%5d", score[index]);  //验证输入
    printf("\n");
    for  (index = 0; index < SIZE; index++) 
         sum += score[index];
    average = (float) sum / SIZE; //求平均分
    printf("Sum of scores = %d, average = %.2f\n", sum, average);

    printf("That's a handicap of %.0f.\n", average - PAR);  //handicap差点-平均分与标准分的差值
    return 0;
}