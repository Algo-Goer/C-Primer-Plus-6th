//较大值重新赋给两个变量，涉及到指针
#include <stdio.h>
double larger_of(double *x, double *y);
int main(void)
{
    double x, y;
    printf("Please enter two numbers:\n");
    while ((~scanf("%lf %lf", &x, &y)))
    {
        larger_of(&x, &y);
        printf("%lf %lf\n", x, y);
        printf("Please enter two numbers:\n");
    }
}
double larger_of(double *x, double *y)
{
    if (*x > *y)
        *y = *x;
    else
        *x = *y;
}