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
}


#include<stdio.h>

int main()
{
    
    //TODO: Gross Salary Calculator

    int basic_salary, gross_salary;

    float HRA, DA, TA;

    //? Taking Input.

    printf("Enter the basic Salary : ");
    scanf("%d", &basic_salary);

    printf("Enter HRA : ");
    scanf("%f", &HRA);
    printf("Enter DA : ");
    scanf("%f", &DA);
    printf("Enter TA : ");
    scanf("%f", &TA);

    //? Calculating gross salary.

    gross_salary = (int)basic_salary + (HRA / 100 * basic_salary) + (DA / 100 * basic_salary) + (TA / 100 * basic_salary);

    //? Giving Output.

    printf("The gross salary is %d.", gross_salary);

    return 0;
}

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
