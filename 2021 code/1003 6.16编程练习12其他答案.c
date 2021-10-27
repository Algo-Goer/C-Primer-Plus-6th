#include <stdio.h>
#include <math.h>
int main(void) 
{
    float number;
    float sum1, sum2;
    float deno;
    _Bool enter_is_right;
    printf("Please enter the total number of time(<= 0 to quit):");
    enter_is_right = scanf("%f", &number);
    while ((number > 0) && enter_is_right)
    {
        for (deno = 1.0, sum1 = 0, sum2 = 0; deno <= number; deno++)
        {
            sum1 += 1.0f / deno;
            sum2 += (1.0f / deno) * (float)pow(-1.0, deno + 1);
        }
        printf("sum1 = %f\nsum2 = %f\n", sum1, sum2);
        printf("\nPlease enter the number of time(<=0 to quit)：");
        scanf("%f", &number);
    }
    printf("bye\n");

    return 0;
}