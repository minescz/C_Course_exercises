#include <stdio.h>
#include <stdlib.h>

float CelsiusFromFarenheit(float temperatureF)
{
    float temperatureC = (temperatureF - 32.0) * 5.0 / 9.0;
    return temperatureC;
}

int main(void)
{
    puts("Temperature Conversion Table");
    puts("========================");

    for(float tempF = 10.0; tempF < 100.0; tempF +=5.0) {
        float tempC = CelsiusFromFarenheit(tempF);

        printf(" %.1f F   |   %5.1f C \n", tempF, tempC);
    }
    puts("------------------------");

    return EXIT_SUCCESS;
}