#include <stdio.h>
float jisuan(float u, float v);
int main(void)
{
    float a, b;
    printf("Enter two floating numbers:\n");
    while(scanf("%f %f", &a, &b) == 2)
    {
        printf("the result is %f\n", jisuan(a, b));
        printf("Enter next pair(non-metric to quit), please:\n");
    }
    printf("That's all!\n");
    return 0;
}

float jisuan(float x, float y)
{
    float c;
    c= (x - y) / (x * y);
    return c;
}
