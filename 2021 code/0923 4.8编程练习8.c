#include <stdio.h>
#define GAL 3.785
#define KM 1.609
int main(void) 
{
    float miles;
    float volume;
    float mile_volume;
    float gal1;
    float km1;
    float gal1_km1;
    printf("Enter the miles:\n");
    scanf("%f",&miles);
    printf("Enter the volume(L):\n");
    scanf("%f",&volume);
    mile_volume = miles / volume;
    gal1 = GAL * volume;
    km1 = KM * miles;
    gal1_km1 = 100 * gal1/ km1 ;
    printf("Europe: gal1_km1 is %.1f\n", gal1_km1);
    printf("American: mile_volume is %.1f\n", mile_volume);
    return 0;
}