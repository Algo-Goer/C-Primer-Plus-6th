#include <stdio.h>
#define DA_ORIGINAL 100
#define DE_ORIGINAL 100
#define DA_RATE 0.1f
#define DE_RATE 0.05f
int main(void)
{
    unsigned int years;
    float da_balance = DA_ORIGINAL;
    float de_balance = DE_ORIGINAL;
   
    for (years = 1; de_balance <= da_balance; years++)
    {
        da_balance += DA_ORIGINAL * DA_RATE;
        de_balance += de_balance * DE_RATE;
    }
    printf("years = %u, Deirdre's investment will exceed Daphne's\n", years);
    printf("Deirdre's investment is %.3f\n", de_balance);
    printf("Daphne's investment is %.3f\n", da_balance);

    return 0;
}