#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
 
double power(double n, int p)  // 函数定义
{
    double pow = 1;
    int i, f = 0;
    if(p == 0)
    {
        if(n == 0)
        {
            printf("0^0 is undefined\n");
        }
        return 1;
    }
    if(n == 0)
    {
        return 0;
    }
    if (p < 0)
    {
        p = -p;
        f = 1;
    }
    for (i = 1; i <= p; i++)
        pow *= n;
    if(f)
    {
        return 1 / pow;
    }
    else
    {
        return pow;
    }
             // 返回pow的值
}
 
int main(void)
{
    double n;
    int p;
    while(scanf("%lf %d", &n, &p) == 2)
    {
        printf("%lf\n", power(n, p));
    }
    return 0;
}