#include <stdio.h>
int main(void)
{
    int num, n, n1, mod;
    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand:\n");
    scanf("%d", &num);
    printf("Now, enter the first operand:\n");
    scanf("%d", &n);
    mod = n % num;
    printf("%d %% %d is %d\n", n, num, mod);
    printf("Enter next number for first operand (<= 0 to quit):\n");
    scanf("%d", &n1);
    while (n1 > 0)
    {
        mod = n1 % num;
        printf("%d %% %d is %d\n", n1, num, mod);
        printf("Enter next number for first operand (<= 0 to quit):\n");
        scanf("%d", &n1);
    }
    printf("Done\n");
    return 0;
}