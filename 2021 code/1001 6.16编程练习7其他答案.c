#include <stdio.h>
#include <string.h>
int main()
{
    char a[20];
    int i;

    printf("Please input a word:");
    scanf("%s", a);

    for (i = strlen(a) - 1; i >= 0; i--)
         printf("%c", a[i]);
    printf("\n");
    return 0;
}