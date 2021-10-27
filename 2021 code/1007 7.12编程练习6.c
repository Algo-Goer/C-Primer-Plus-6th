#include <stdio.h>
int main(void) 
{
    char ch1, ch2;
    int sum = 0;    
    printf("Enter sentences ending with #:\n");
    while ((ch1 = getchar()) != '#')
    {
        if (ch1 == 'i' && ch2 == 'e')
           sum++;
        ch2 = ch1;
    }
    printf("ei has appeared by %d times.", sum);
    return 0;
}
