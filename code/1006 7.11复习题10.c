#include <stdio.h>
int main(void) 
{
    char ch;
    while ((ch = getchar()) != '#')
    {
        if (ch != '\n')
        {
           printf("Step1\n");
           if (ch == 'b')
             break;
           else if (ch == 'q')                 
             {
               printf("Step2\n");
               printf("Step3\n");
             }
           else if (ch == 'h')
             {
               printf("Step3\n");
             }
        } 
   }
    printf("Done\n");
    return 0;
}