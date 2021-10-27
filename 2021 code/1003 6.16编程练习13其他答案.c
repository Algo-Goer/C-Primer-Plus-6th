#include <stdio.h>
int pow_int( int a, int b);
int main(void) 
{
    int two_power[8];
    int i;

    for (i = 0; i < 8; i++)
    {
        two_power[i] = pow_int(2, i+1);
    }
    i = 0;
    do
    {
        printf("%d ", two_power[i]);
    } while (++i < 8);
    printf("\n");

    return 0;
}

int pow_int(int a, int b)
{
    int i;
    int pow = 1;

    for (i = 0; i < b; i++)
         pow *= a;
    
    return pow;
}