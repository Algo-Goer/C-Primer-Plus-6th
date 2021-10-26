#include <stdio.h>
int main(void) 
{
    int num, end;
    printf("请输入一个整数：\n");
    scanf("%d", &num);
    end = 11;
    while (end-- > 0) 
    {
        printf("%d\t", num++);
    }
    printf("\n");
    return 0;
}