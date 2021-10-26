#include <stdio.h>
#define BASE 10.00f
#define OVERTIME 1.5f
#define RATE 0.15f
#define RATE2 0.20f
#define RATE3 0.25f
int main(void)
{
    float hours, wages, tax, netwages, overload, newhours;
    printf("Please enter working hours per hour:\n");
    scanf("%f", &hours);
    if (hours <= 40)
    {
        wages = hours * BASE;
        if (wages <= 300)
        {
            netwages = wages * (1 - RATE);
            tax = wages * RATE;
        }
        else
        {
            tax = 300 * RATE + (wages - 300) * RATE2;
            netwages = wages - tax;
        }
    }
    else
    {
        overload = hours - 40;
        newhours = 40 + overload * 1.5;
        wages = newhours * BASE;
        if (wages > 300 && wages <= 450)
        {
            tax = 300 * RATE + (wages - 300) * RATE2;
            netwages = wages - tax;
        }
        else
        {
            tax = 300 * RATE + 150 * RATE2 + (wages - 450) * RATE3;
            netwages = wages - tax;
        }
    }
    printf("wages:%5.2f\ntax:%5.2f\nnetwages:%5.2f\n", wages, tax, netwages);
    return 0;
}