#include <stdio.h>
#define ORGINAL 5
#define DUNBAR 150
int main(void) 
{
    int week, friends;
    friends = ORGINAL;
    for (week = 1; friends <= DUNBAR; week++) 
    {
        friends -= week;
        friends *= 2;
        printf("weeks:%d\tfriends:%d\n", week, friends);
    }
    return 0;
}