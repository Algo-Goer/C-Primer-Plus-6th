#include <stdio.h>
#include <ctype.h>
int char_loc(char ch);
int main(void)
{
    char ch;
    int location;
    printf("Please enter something:\n");
    while ((ch = getchar()) != EOF)
    {
        if  (ch == '\n')
           continue;
        location = char_loc(ch);
        printf("The position of %c in alphabet table is %d.\n", ch, location);
    }
    return 0;
}
int char_loc(char ch)
{
    int loc;
    if (isalpha(ch))
    {
        loc = tolower(ch) - 'a' + 1;
    }
    else
        loc = -1;
    return loc;
}