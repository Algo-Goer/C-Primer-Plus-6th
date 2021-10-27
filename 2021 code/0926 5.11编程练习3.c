#include <stdio.h>
#define TRANSFER 7
int main(void)
{
    int days, weeks, mod;
    printf("Please enter how many days:\n");
    scanf("%d", &days);
    while (days > 0) 
    {
        weeks = days / TRANSFER;
        mod = days % TRANSFER;
        printf("%d days are %d weeks, %d days.\n", days, weeks, mod);
        printf("Please enter how many days:\n");
        scanf("%d", &days);
    }
    printf("Wish you happy everyday!\n");
    return 0;
}