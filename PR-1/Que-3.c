#include<stdio.h>

int main()
{

    //TODO: Triangle angle finder.

    float first_angle, second_angle, third_angle;

    //? Taking Input.

    printf("Give the FIRST angle of triangle : ");
    scanf("%f", &first_angle);

    printf("Give the SECOND angle of triangle : ");
    scanf("%f", &second_angle);

    //? Calculating third angle.

    third_angle = 180 - (first_angle + second_angle);

    //?Giving Output.

    printf("\nThe third angle is %f.\n", third_angle);

    return 0;
}
