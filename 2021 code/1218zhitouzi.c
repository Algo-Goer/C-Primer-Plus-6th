#include <stdlib.h> // 提供rand()原型
int rollem(int sides)
{
    int roll;

    roll = rand() % sides + 1;
    return roll;
}