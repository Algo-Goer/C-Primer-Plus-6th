#include <stdio.h>
void chline(char ch, int i, int j);  //题目要求j行i列
int main(void)
{
    char ch;
    int i, j;
    printf("Please enter the character you want to type: \n");
    ch = getchar();
    printf("Please enter the number of colums and rows: \n");
    while ((scanf("%d %d", &i, &j)) == 2)
    {
        chline(ch, i, j);
        printf("Please enter the number of rows and colums: \n");
    }
    return 0;
}
void chline(char ch, int i, int j)
{
    int count_row;
    int count_column;
    for (count_row = 0; count_row < j; count_row++)
    {
        for (count_column = 0; count_column < i; count_column++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}
