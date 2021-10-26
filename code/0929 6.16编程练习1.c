#include <stdio.h>
#define SIZE 26
int main(void) 
{
     char num[SIZE];
     char i = 'a';
     for(i = 'a'; i <= 'z'; i++) 
         printf("%c ", &num[i]);
     return 0;
}