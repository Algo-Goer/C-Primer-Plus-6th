#include <stdio.h>
int main(void) 
{
    const double f = 3e-23;
    const int h = 950;
    int k;

    printf("enter k:");
    scanf("%d", &k);
    printf("f is:%e",k*h/f);
    
    return 0;
}