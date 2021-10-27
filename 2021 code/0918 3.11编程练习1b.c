#include <stdio.h>
int main(void)
{
    int SuperInt  = 1;

    for(int i = 0;i < 32;i++)
    {
        SuperInt *=2;
        printf("%d\n",SuperInt);
    }
    float U_Float = 1e64 * 1e2;
    float D_Float = 1e-64 * 1e-2;

    printf("%d\n",SuperInt);
    printf("%f\n",U_Float);
    printf("%f\n",D_Float);

    return 0;
}


