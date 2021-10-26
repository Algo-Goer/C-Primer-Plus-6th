#include <stdio.h>
#define LEN 30

int main(void) 
{
    float height;
    char name[LEN];

    printf("Please enter your name: ");
    scanf("%29s", name);
    printf("Hello! %s, how tall you are(inch):", name);
    scanf("%f", &height);
    printf("%s, you are %.3f feet tall.\n", name, height / 12.0);

    return 0;
}