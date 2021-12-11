#include <stdio.h>
int main(void)
{
    char line[81];
    while (fgets(line, 81, stdin))
        fputs(line, stdout);
}