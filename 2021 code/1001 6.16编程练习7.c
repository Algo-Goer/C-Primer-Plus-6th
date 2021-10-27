#include <stdio.h>
#include <string.h>
#define SIZE 10000
int main(void)
{
    char ch[SIZE];
    int index, str;
    printf("Please enter a word:");
    scanf("%s", ch);
    for (index = strlen(ch) - 1; index >= 0; index--)
         printf("%c", ch[index]);
    printf("\n");    
    return 0;
}