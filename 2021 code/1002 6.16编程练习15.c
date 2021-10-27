#include <stdio.h>
#define SIZE 20
int main(void)
{
    char a[255];
    int i;

    printf("Please enter a line of characters: \n");  
    scanf("%c", &a[i]);   
    while (a[i] != '\n')
    {
        i++;
        scanf("%c", &a[i]);
    }
    for (i--; i >= 0; i--)
        printf("%c", a[i]);
    printf("\n");
    return 0;
}