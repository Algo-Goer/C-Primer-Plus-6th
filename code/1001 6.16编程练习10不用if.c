#include <stdio.h>
int main()
{
    int lower, upper, index;
    printf("Enter lower and upper integer limits: ");
    scanf("%d %d", &lower, &upper);
    while(lower < upper)
    {
        int sum = 0;
        for (index = lower; index <= upper; index++)
             sum += index * index;
        printf("The sums of the squares from %d to %d is %d\n", lower * lower, upper * upper, sum);
        printf("Enter next set of limits:\n");
        scanf("%d %d", &lower, &upper);
    }
    printf("Done\n");
    return 0;
}