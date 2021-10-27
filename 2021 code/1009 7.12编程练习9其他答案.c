#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    int num;
    int i, j;
    int flag = 0;
    printf("请输入一个正整数：");
    while (scanf("%d", &num) == 1 && num > 0)
    {
        printf("小于或等于该数的素数有：");
        for (i = 2; i <= num; i++)
        {
            for (j = 2; j <= sqrt((double)i); j++)
            {
                if (i % j == 0)
                    flag = 1;
            }
            if (flag == 0)
                printf("%3d", i);
            flag = 0;
        }
    }
    system("pause");
    return 0;
}
