#include <stdio.h>
void temperatures(double f);
int main(void) 
{
    double fahrenheit;
    printf("Fahrenheit:\n");
    while(scanf("%lf",&fahrenheit) == 1)
    {
        temperatures(fahrenheit);
        printf("Fahrenheit(q to quit):\n");
    }
    printf("That's all!\n");
    return 0;
}
void temperatures(double f)
{
    const double FTC_S1 = 1.8; 
    const double FTC_S2 = 32.0; 
    const double CTK_S1 = 273.16;
    double celsius, kelvin;
    celsius = FTC_S1 * f + FTC_S2;
    kelvin = celsius + CTK_S1;
    printf("Fahrenheit: %.2f℉\n", f);
    printf("Celsius: %.2f℃\n", celsius);
    printf("Kelvin: %.2fK\n", kelvin);
}