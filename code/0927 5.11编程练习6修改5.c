#include <stdio.h>
int main(void) 
{
    int days, count, sum;
    printf("How many days did you earn:\n");
    scanf("%d", &days);
    sum = 0;
    count = 0;
    while (count++ < days)
    { 
        sum = sum + count * count;
    }
    printf("sum = %d\n", sum);
    return 0;
}

