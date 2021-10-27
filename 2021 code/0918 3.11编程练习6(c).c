#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
    float quantity_mol = 3.0E-23;
    float quantity_qt = 950;
    float quarts;
    float molecules;
    printf("请输入水的夸脱数：");
    scanf("%f",&quarts);
    molecules = quantity_qt * quarts / quantity_mol;
    printf("水分子数量大约为：%e", molecules);
    return 0;
}