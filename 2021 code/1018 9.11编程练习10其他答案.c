#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
 
void to_base_n(unsigned long n, unsigned short x) /* 递归函数 */
{
    int r;
    r = n % x;
    if (n >= x)
        to_base_n(n / x, x);
    printf("%d", r);
    return;
}
 
int main(void)
{
    unsigned long n;
    unsigned short x;
    scanf("%lu %hu", &n, &x);
    to_base_n(n, x);
    return 0;
}