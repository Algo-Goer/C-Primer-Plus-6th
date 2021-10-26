#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    int lc = 0; //统计小写字母
    int uc = 0; //统计大写字母
    int oc = 0; //统计其他字母
    while ((ch = getchar()) != '#')
    {
        if (islower(ch))
           lc++;
        else if (isupper(ch))
           uc++;
        else
           oc++;
    }
    printf("%d lowercase, %d uppercase, %d other", lc, uc, oc);
    return 0;
}
