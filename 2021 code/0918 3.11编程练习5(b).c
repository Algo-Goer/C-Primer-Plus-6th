#include <stdio.h>
int main(void)
{
    int a;
    const float t = 3.156e7;
    printf("enter your age: ");
    scanf("%d",&a);
    printf("The corresponding number of seconds is: %.4f\n", a*t);

    return 0;

}