#include <stdio.h>

int main(void) 
{
    char ch;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    
    while((ch = getchar()) != '#') 
    {  
        if (ch == ' ') 
          sum1++;
        else if (ch == '\n')
          sum2++;
        else 
          sum3++;
    }
    printf("kongge:%d\thuanhangfu:%d\tothers:%d\n", sum1, sum2, sum3);
    return 0;
}