#include <stdio.h>

int main()
{
    float celsius;
    float fahrenheit;
    float kelvin;

printf("Celsius: ");
scanf("%f", &celsius);

fahrenheit = celsius * 1.8 + 32;
printf("Fahrenheit %f: ", fahrenheit);

kelvin = celsius + 273.15;
printf("\n Kelvin %f: ", kelvin);

return 0;

}
