#include <stdio.h>
int main(void)
{
    int number,i,j;
    int sign = 0;
    printf("please enter a number : ");
    while (scanf("%d",&number) > 0)
    {
        for (i=2; i<=number; i++)
        {
            for (j=2 ; j <= i; j++)
            {
                if ( i % j == 0 && j != i )
                    sign = 1;
                    break;
            }
            if (sign == 0)
            {
                printf("%d \n",i);
            }
             sign = 0;
        }
    printf("please enter a number : ");
    }
    return 0;
}