#include <stdio.h>
#define C_PER_I 2.54    //一英寸等于2.54厘米
#define I_PER_F 12      //一英尺等于12英寸
int main(void)
{
    double cm;
    double inch;
    int feet;

    printf("Enter a height in centimeters: ");
    scanf("%lf", &cm);

    while (cm > 0)
    {
        inch = cm / C_PER_I;
        feet = (int) inch / I_PER_F;
        printf("%.1f cm = %d feet, %.1f inches\n", cm, feet, inch);
        printf("Enter a height in centimeters (<= 0 to quit): ");
        scanf("%lf", &cm);
    }
    printf("bye\n");
    return 0;
}