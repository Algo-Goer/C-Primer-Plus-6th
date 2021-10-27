//for_geo.c
#include <stdio.h>
int main(void) 
{
    double asset;
    for (asset = 100.0; asset < 150.0; asset = asset * 1.1)
         printf("Your asset is now $%.2f.\n", asset);
    return 0;
}