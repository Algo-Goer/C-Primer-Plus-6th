//素性检验--试除法
#include <stdio.h>

#include <math.h>
int main(void)
{
    int n, i, j;
    int flag = 0;
    printf("Please enter an integer that is bigger than 1:\n");
    while (scanf("%d", &n) == 1 && n > 1)
    {
        printf("The primer numbers are as follows:\n");
        for (i = 2; i <= n; i++)
        {
            for (j = 2; j <= sqrt(i); j++)
            {
                if (i % j == 0)
                    flag++;
            }
            if (flag == 0)
                printf("%d\t", i);
            flag = 0;
        }
    }
    printf("End\n");
    return 0;
}