#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    int word = 0;   //单词数
    int letter = 0; //字母数
    printf("Please enter a sentence:\n");
    while ((ch = getchar()) != EOF)
    {
        if (islower(ch) || isupper(ch))
            letter++;
        if (isspace(ch))
            word++;
    }
    printf("There are %d letters.\n", letter);
    printf("There are %d words.\n", word);
    printf("There are %lf letters averagely in every word.\n", (double)letter / (double)word);
    return 0;
}