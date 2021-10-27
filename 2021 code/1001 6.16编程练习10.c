#include <stdio.h>
int main(void) 
{
    int min, max, num;
    printf("Enter lower and upper integer limits:\n");
    while (scanf("%d %d", &min, &max) == 2)
    {
        if (min < max)
        {
            int sum = 0;
            for (num = min; num <= max; num++)
                sum += num * num;
            printf("The sums of the squares from %d to %d is %d\n", min * min, max * max, sum);   
            printf("Enter next set of limits:\n");
        }
        else 
             break;
    }
    printf("Done!\n");
    return 0;
}

