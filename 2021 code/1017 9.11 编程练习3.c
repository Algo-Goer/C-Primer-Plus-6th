#include <stdio.h>
void typeline(char ch, int i, int j); //题目要求i指定列，j指定行数
int main(void)
{
    int good;
    int i, j;
    char ch;
    printf("Please enter a character you want to print:\n");
    good = scanf("%c", &ch);
    while (good = 1)
    {
        printf("Please enter the number of colums and rows:\n");
        while ((scanf("%d %d", &i, &j)) == 2)
        {
            typeline(ch, i, j);
        }
    }
    return 0;
}
void typeline(char ch, int i, int j)
{
    int m, n;
    for (m = 0; m < j; m++)
    {
        for (n = 0; n < i; n++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}