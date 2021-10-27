#include <stdio.h>

int main(void) 
{
    int i, row;
    char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
    lets[0] = 'A';
    for(row = 1; row <= 6; row++) 
    {
        for(i = 0; i <=  row * (row - 1) - (row - 1) * (row - 2) / 2; i++) 
            printf("%c", lets[0]++);
            
        printf("\n");
    }
    return 0;
}

