//! PR-1 Multi-Utility Program. 

#include<stdio.h>

int main()
{

    //TODO: Temperature convertor.

    float celsius, fahrenheit;

    //? Taking Input.

    printf("Enter the temperature in celsius : ");
    scanf("%f", &celsius);

    //? Calculating temperature

    fahrenheit = (9.0 / 5 * celsius) + 32;

    //? Giving Output.

    printf("The temperature in fahrenheit is %f", fahrenheit);

    return 0;
}
