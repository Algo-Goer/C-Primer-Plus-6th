#include <stdio.h>
int max_n(int a, int b, int c);
int main(void)
{
    int x, y, z;
    int max;
    printf("Please enter three integers: \n");
    while ((scanf("%d %d %d", &x, &y, &z)) == 3)
    {
        max = max_n(x, y, z);
        printf("The max number is %d.\n", max);
        printf("Please enter three integers: \n");
    }
    return 0;
}
int max_n(int a, int b, int c)
{
    int max_d = a;
    if (b > max_d)
        max_d = b;
    if (c > max_d)
        max_d = c;
    return max_d;
}