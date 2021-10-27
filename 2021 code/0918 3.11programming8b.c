#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float cups;
    printf("请输入杯数:");
    scanf("%f", &cups);
    float pints = cups/2;
    float ounces = 8*cups;
    float spoons = 8*cups*2;
    float taaspoons = 8*cups*2*3;
    printf("品脱:%f\t盎司:%f\t汤勺：%f\t茶勺：%f\n",pints, ounces, spoons, taaspoons);
    return 0;
}