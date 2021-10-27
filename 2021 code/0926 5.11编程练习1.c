#include <stdio.h>

int main(void) 
{
    const int MIN_TO_HOURS=60;
    int minutes;
    int hours;
    int mod;
    printf("How long(Enter the minutes):\n");
    scanf("%d",&minutes);
    while (minutes > 0) 
    {
        hours = minutes / MIN_TO_HOURS;
        mod = minutes % MIN_TO_HOURS;
        printf("It's %d hours and %d minutes.\n", hours, mod);
        printf("How long(Enter the minutes):\n");
        scanf("%d", &minutes);
    }
    printf("Perfect!Bye!\n");
    return 0;
}