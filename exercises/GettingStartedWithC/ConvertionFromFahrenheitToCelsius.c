/*Fahrenheit  to celcius temperature converter*/

#include <stdio.h>

int main (void)
{
    printf("Please enter the temperture value in fahrenheit: ");
    
    float temperatureF;
    scanf("%f", &temperatureF);
    
    float temperatureC = (temperatureF - 32.0) * 5.0/9.0;
    
    printf("The corresponding temperature in celcius is %.1f c.\n", temperatureC);
    
    return 0;

}