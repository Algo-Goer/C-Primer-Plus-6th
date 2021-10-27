//素性检验--试除法：不超过根号n的素数与n做除法来测试是否为素数
//位运算次数至少需要c*根号n
//需要知道不超过根号n的所有素数
#include <stdio.h>
#include <math.h>
int main(void) 
{
    int n, i;
    printf("Please enter an integer that is not smaller than 2:\n");
    while (scanf("%d", &n) == 1) 
    {
        if (n ==2 || n == 3)
            printf("prime number:%d", n);
        if (n >=4)
        {
            for (i = 2; i * i <= n; i++)
            {
                if (n % i == 0)
                   break;          
            }
        }
        if (n == 1)
           printf("Please enter an integer that is not smaller than 2:");
           continue;
    }
    
    return 0;
}