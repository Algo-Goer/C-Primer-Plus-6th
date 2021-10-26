#include <stdio.h>
int main(void) 
{
    int times;
    float count1 = 1.0f;
    float count2 = 1.0f;
    float sum1 = 0.0;
    float sum2 = 0.0;

    printf("How many times addition you want:\n");
    scanf("%d", &times);
    for (int i = 1; i <= times; i++, count1++) 
    {
        sum1 += 1.0 / count1;
    }
    for (int j = 1; j <= times; j++, count2++) 
    {
        if (j % 2 == 0)
        {
            sum2 -= 1.0 / count2;
        }
        else
        {
            sum2 += 1.0 / count2;
        }
    }
    printf("The first infinite series: %f\n", sum1);
    printf("The second infinite series: %f\n", sum2);

    return 0;
}