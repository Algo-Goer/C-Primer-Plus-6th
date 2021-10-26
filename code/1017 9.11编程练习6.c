//考查指针
#include <stdio.h>
void rank(double *x, double *y, double *z);
int main(void)
{
    double n1, n2, n3;
    printf("Please enter three numbers:\n");
    while ((~scanf("%lf %lf %lf", &n1, &n2, &n3)))
    {
        rank(&n1, &n2, &n3);
        printf("min: %g\t middle:%g\t max:%g\t", n1, n2, n3);
        printf("Please enter three numbers:\n");
    }
    return 0;
}
void rank(double *x, double *y, double *z)
{
    double min, max, middle;
    min = ((*x > *y) ? *y : *x) > *z ? *z : ((*x > *y) ? *y : *x);
    max = ((*x > *y) ? *x : *y) > *z ? ((*x > *y) ? *x: *y) : *z;
    middle = *x + *y + *z - min -max;
    *x = min;
    *z = max;
    *y = middle;
}