#include <stdio.h>
#define M_PER_H 60
int main(void) 
{
    int min, hour, left; //left-剩余分钟数
    printf("请输入分钟数（0或负数终止循环）:\n");
    scanf("%d", &min); 
    while (min > 0)
    {
        hour = min / M_PER_H;
        left = min % M_PER_H;
        printf("%d minutes are %d hours, %d minutes.\n", min, hour, left);
        printf("再一次输入分钟数(0或负数终止循环）:");
        scanf("%d", &min);
    }
    printf("That's all!\n");
    return 0;
}