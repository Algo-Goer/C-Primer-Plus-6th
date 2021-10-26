#include <stdio.h>
#define JIBEN 10

int main(void) 
{
    int hour;
    int zonge;
    int shuijin;
    int jingshouru;
    printf("Please enter working hours per hour:\n");
    scanf("%d", &hour);

    if (hour <= 40)
    {
        zonge = JIBEN * hour;

        if (zonge <= 300)
        {
            shuijin = 0;
            jingshouru = zonge;
            printf("wages:%d,tax:%d,net wages:%d.\n",zonge,shuijin,jingshouru);
        }
        else
        {
            shuijin = 300 * 0.15 + (zonge -300) * 0.2;
            jingshouru = zonge - shuijin;
            printf("wages:%d,tax:%d,net wages:%d.\n",zonge,shuijin,jingshouru);
        }
    }
    else
    {
        zonge = 400 + JIBEN * (hour - 40) * 1.5;
        if (zonge <= 450)
        {
            shuijin = 300 * 0.15 + (zonge - 300) * 0.2;
            jingshouru = zonge - shuijin;
            printf("wages:%d,tax:%d,net wages:%d.\n",zonge,shuijin,jingshouru);
        }
        else
        {
            shuijin = 300 * 0.15 + 150 * 0.2 + (zonge - 450) * 0.25;
            jingshouru = zonge - shuijin;
            printf("wages:%d,tax:%d,net wages:%d.\n", zonge,shuijin,jingshouru);
        }
    }
    return 0;
}