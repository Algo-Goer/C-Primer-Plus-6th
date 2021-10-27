#include <stdio.h>
int main(void) 
{
    int num, end;
    printf("请输入一个整数：\n");
    scanf("%d", &num);
    while (end++ < 11) 
    {
        printf("%d\n", num++);
    }
    printf("\n");
    return 0;
}