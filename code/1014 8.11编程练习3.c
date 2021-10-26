#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    int lower_n = 0; //小写字母个数
    int upper_n = 0; //大写字母个数
    printf("Please enter upper and lower case letters:\n");
    while ((ch = getchar()) != EOF)
    {
        if (islower(ch))
            lower_n++;
        else if (isupper(ch))
            upper_n++;
    }
    printf("There are %d upper letters and %d lower letters.\n", upper_n, lower_n);
    return 0;
}