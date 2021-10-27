#include <stdio.h>
int main(void) 
{
    float x, y, diff, multiplier, compute;
    printf("Please enter two floating numbers:");
    while (scanf("%f %f", &x, &y) == 2)
    {
        diff = x - y;
        multiplier = x * y;
        compute = diff / multiplier;
        printf("%f\n", compute);
        printf("Next enter two floating numbers(Non-numeric numbers to quit):\n");
    }
    printf("That's all!\n");
    return 0;
}