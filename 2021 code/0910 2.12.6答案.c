#include <stdio.h>

int main(void) 
{
    int toes = 10;

    printf("toes = %d\n",toes);
    printf("toes * 2 = %d\n",toes * 2);
    toes = toes * toes;
    printf("toes ^ 2 = %d\n",toes);

    return 0;
}