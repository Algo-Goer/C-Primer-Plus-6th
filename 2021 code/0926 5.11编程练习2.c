#include <stdio.h>
#define TEN 10
int main(void) 
{
    int number;
    int count;
    printf("Please enter an integer:\n");
    scanf("%d", &number);
    printf("%d", number);
    for (count = 1; count <= TEN; count++)
         printf("%5d", number + count);
    return 0;
}