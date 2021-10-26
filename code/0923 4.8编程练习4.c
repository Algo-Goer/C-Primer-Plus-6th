#include <stdio.h>
int main(void) 
{
    float height;
    char name[40];
    printf("Enter your name: \n");
    scanf("%s", name);
    printf("Enter your height(inch): \n");
    scanf("%f", &height);
    printf("%s, you are %.3f feet tall", name, height/12);

    return 0;
}