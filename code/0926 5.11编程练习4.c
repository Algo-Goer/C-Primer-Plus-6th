#include <stdio.h>
#define CM_INCHES 15.556
int main(void) 
{
    float height, feet, inches;
    const float cm_feet=36.4;
    printf("Enter a height in centimeters:\n");
    scanf("%f", &height);
    while (height > 0)
    {
        feet = height / cm_feet;
        inches = height / CM_INCHES;
        printf("%.1f cm = %.0f feet, %.1f inches\n", height, feet, inches);
        printf("Enter a height in centimeters(<= 0 to quit):\n");
        scanf("%f", &height);
    }
    printf("bye\n");
    return 0;
}