#include <stdio.h>
int main()
{
    float a, b ,c;
    printf("Enter two float numbers: ");

    while (scanf("%f %f", &a, &b) == 2) 
    {
        c = (a - b)/(a * b);
        printf("c = %f\n", c);
        printf("Enter next pair(non-numeric to quit):\n");
    }
    return 0;
}