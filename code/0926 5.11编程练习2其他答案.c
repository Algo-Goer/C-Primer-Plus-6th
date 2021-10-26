#include <stdio.h>
int main(void) 
{
    int num, end;
    printf("请输入一个整数：\n");
    scanf("%d", &num);
    end = num + 10;
    while (num <= end) 
    {
        printf("%d ", num);
        num++;
    }
    printf("\n");
    return 0;
}