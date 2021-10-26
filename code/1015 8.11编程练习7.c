#include <stdio.h>
#include <ctype.h>
char get_first(void);
#define BASE1 8.75f
#define BASE2 9.33f
#define BASE3 10.00f
#define BASE4 11.20f
#define OVERTIME 1.5f
#define RATE 0.15f
#define RATE2 0.20f
#define RATE3 0.25f
int main(void)
{
    float base, hours, wages, tax, netwages, overload, newhours;
    char choice;
    printf("*************************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("a)$8.75/hr                   b)$9.33/hr\n");
    printf("c)$10.00/hr                  d)$11.20/hr\n");
    printf("q)quit\n");
    printf("*************************************************************************\n");
    while ((choice = get_first()) != 'q')
    {
        switch (choice)
        {
        case 'a':
            base = BASE1;
            break;
        case 'b':
            base = BASE2;
            break;
        case 'c':
            base = BASE3;
            break;
        case 'd':
            base = BASE4;
            break;
        }
        printf("Please enter working hours per hour:\n");
        scanf("%f", &hours);
        if (hours <= 40)
        {
            wages = hours * base;
            if (wages <= 300)
            {
                netwages = wages * (1 - RATE);
                tax = wages * RATE;
            }
            else
            {
                tax = 300 * RATE + (wages - 300) * RATE2;
                netwages = wages - tax;
            }
        }
        else
        {
            overload = hours - 40;
            newhours = 40 + overload * 1.5;
            wages = newhours * base;
            if (wages > 300 && wages <= 450)
            {
                tax = 300 * RATE + (wages - 300) * RATE2;
                netwages = wages - tax;
            }
            else
            {
                tax = 300 * RATE + 150 * RATE2 + (wages - 450) * RATE3;
                netwages = wages - tax;
            }
        }
        printf("wages:%5.2f\ntax:%5.2f\nnetwages:%5.2f\n", wages, tax, netwages);
    }
    printf("Quit.\n");
    return 0;
}
char get_first(void)
{
    char ch;
    ch = getchar();
    while (isspace(ch) || ch == '\t' || ch == '\v')
        ch = getchar();
    while (getchar() != '\n')
        continue;
    return ch;
}