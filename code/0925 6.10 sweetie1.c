//一个计数循环
#include <stdio.h>
int main(void) 
{
    const int NUMBER = 5;
    int count = 1; //初始化
    while (count <= NUMBER)  //测试
    {
        printf("Be my Valentine!\n"); //behavior
        count++; //更新计数
    }
    return 0;
}