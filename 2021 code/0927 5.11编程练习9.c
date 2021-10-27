#include <stdio.h>
void temperatures(double f);

int main(void) 
{
    double Fahrenheit;
    printf("Please enter the degree of Fahrenheit:\n");
    while (scanf("%lf", &Fahrenheit) == 1)
    {
        temperatures(Fahrenheit);
        printf("Please enter the degree of Fahrenheit:\n");
    }
    printf("That's all!\n");
    return 0;
}

void temperatures(double f)
{
    const double N1 = 5.0;
    const double N2 = 9.0;
    const double N3 = 32.0;
    const double N4 = 273.16;
    double Celsius, Kelvin;
    Celsius = N1/ N2 *(f - N3);
    Kelvin = Celsius + N4;
    printf("Fahrenheit: %.2f℉\nequals:\nCelsius: %.2f℃\nKelvin:%.2fK\n", f, Celsius, Kelvin);
}