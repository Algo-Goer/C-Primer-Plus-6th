#include <stdlib.h> // �ṩrand()ԭ��
int rollem(int sides)
{
    int roll;

    roll = rand() % sides + 1;
    return roll;
}