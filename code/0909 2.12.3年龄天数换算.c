#include <stdio.h>

int main(void) 
{
    int days;
    int age = 18;
    int days_per_yr = 365;

    days = age * days_per_yr;
    printf("I am %d years old.\n", age);
    printf("Days are %d.\n", days);

    return 0;

}