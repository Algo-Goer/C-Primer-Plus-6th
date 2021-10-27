#include <stdio.h>
#define BALANCE 1000000
#define OUT 100000
#define RATE 0.08f
int main(void)
{
    unsigned int years;
    float balance = BALANCE;

    for (years = 1; balance >= 0; years++)
    {
        balance = balance * (1 + RATE) - OUT;
    }
    printf("years = %u, balance will be 0.\n", years);

    return 0;
}