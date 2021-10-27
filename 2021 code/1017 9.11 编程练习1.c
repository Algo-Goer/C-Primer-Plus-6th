#include <stdio.h>
double min(double x, double y);
int main(void)
{
    double minimum;
    double a, b;
    printf("Please enter two numbers:\n");
    while (scanf("%lf %lf", &a, &b) == 2)
    {
        minimum = min(a, b);
        printf("The minimum value of the two numbers is %f.\n", minimum);
        printf("Please enter two numbers again:\n");
    }
    return 0;
}
double min(double x, double y)
{
    double min = x;
    while (x > y) 
    {
        min = y;
    }
    return min;
}