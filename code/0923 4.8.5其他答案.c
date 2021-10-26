#include <stdio.h>
#define BIT 8

int main(void) 
{
    float speed, size, time;

    printf("Please enter net speed(Mbit/s): ");
    scanf("%f", &speed);
    printf("Please enter file size(MB): ");
    scanf("%f", &size);
    time = size * BIT / speed;
    printf("At %.2f megabits per second,", speed);
    printf("a file of %.2f megabytes ", size);
    printf("downloads in %.2f seconds.\n", time);

    return 0;
}