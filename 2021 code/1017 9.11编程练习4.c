#include <stdio.h>
double harmonic_mean(double x, double y);
int main(void)
{
    double x, y, res;
    printf("Please enter two numbers:\n");
    while (~scanf("%lf %lf", &x, &y))
    {
        res = harmonic_mean(x, y);
        printf("The harmonic mean of %lf and %lf is %lf.\n", x, y, res);
        printf("Please enter two numbers:\n");
    }
    return 0;
}
double harmonic_mean(double x, double y)
{
    double res, avg;
    double reciprocal1, reciprocal2;
    reciprocal1 = 1 / (double)x;
    reciprocal2 = 1 / (double)y;
    avg = (reciprocal1 + reciprocal2) / 2.0;
    res = 1 / (double)avg;
    return res;
}