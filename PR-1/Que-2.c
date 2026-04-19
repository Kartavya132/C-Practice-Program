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
