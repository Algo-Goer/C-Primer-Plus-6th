#include <stdio.h>
int main(void) 
#define BIT 8
{
    float v;
    float volume;
    float seconds;
    printf("Enter v(Mb/s):\n");
    scanf("%f", &v);
    printf("Enter the volume(MB):\n");
    scanf("%f", &volume);
    seconds = volume * BIT/ v;
    printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.\n", v, volume, seconds);
    return 0;
}