#include <stdio.h>
#include <ctype.h>
char get_first(void);
char get_choice(void);
float get_float(void);
int main(void)
{
    int choice;
    float n1, n2;
    float calc;

    while ((choice = get_choice()) != 'q')
    {
        printf("Enter first number:\n");
        n1 = get_float();
        printf("Enter second number:\n");
        n2 = get_float();
        switch (choice)
        {
        case 'a':
            calc = n1 + n2;
            printf("%.1f + %.1f = %.1f \n", n1, n2, calc);
            break;
        case 's':
            calc = n1 - n2;
            printf("%.1f - %.1f = %.1f \n", n1, n2, calc);
            break;
        case 'm':
            calc = n1 * n2;
            printf("%.1f * %.1f = %.1f \n", n1, n2, calc);
            break;
        case 'd':
        {
            while (n2 == 0)
            {
                printf("Enter a number other than 0:\n");
                scanf("%f", &n2);
                continue;
            }
            calc = n1 / n2;
            printf("%.1f / %.1f = %.1f \n", n1, n2, calc);
            break;
        }
        }
    }
    printf("Bye.\n");
    return 0;
}
char get_choice(void)
{
    char ch;
    printf("Enter the operation of your choice: \n");
    printf("a. add                       s. subtract\n");
    printf("m. multiply                  d. divide\n");
    printf("q. quit\n");
    ch = get_first();
    while (ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q')
    {
        printf("Please respond with a, s, m, d or q.\n");
        ch = get_first();
    }
    return ch;
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
float get_float(void)
{
    float input;
    char ch;
    while (scanf("%f", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch); //处理错误输出
        printf(" is not an number.\n");
        printf("Please enter a number, such as 2.5, -1.78E8, or 3:\n");
    }
    return input;
}
