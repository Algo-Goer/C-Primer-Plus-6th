#include <stdio.h>
int main(void) 
{
    int p, q;
    scanf("%d", &p);
    while (p > 0)
    {
        printf("%d\n", p);
        scanf("%d", &q);
        while (q > 0)
        {
            printf("%d\n", p * q);
            if (q > 100) 
                 break;  //跳出内层循环
            scanf("%d", &q);
        }
        if (q > 100)
             break; //跳出外层循环
        scanf("%d", &p);
    }
}