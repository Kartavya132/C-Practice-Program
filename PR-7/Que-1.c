// TODO: Calculator

#include <stdio.h>

// Function prototypes
int showMenu(void);
float calculate(int choice, int a, int b);
void divider(void);
void printResult(float result);

int main(void)
{
    int choice, a, b; // Variables for user choice and input numbers
    float result;     // Variable to store the calculation result

    // Print the calculator header
    printf("\n|---------------------------|");
    printf("\n|     SIMPLE CALCULATOR     |");
    printf("\n|---------------------------|\n");

    // Main loop for calculator operations
    while (1)
    {
        choice = showMenu(); // Get user's menu choice

        if (choice == 0) // Exit condition
        {
            printf("\nThanks for using the calculator. Bye!\n\n");
            break;
        }

        // Get input numbers from user
        printf("\nEnter first number  : ");
        scanf("%d", &a);
        printf("Enter second number : ");
        scanf("%d", &b);

        // Check for division by zero
        if ((choice == 4 || choice == 5) && b == 0)
        {
            printf("\n[ERROR] Cannot divide by zero!\n");
            continue; // Skip to next iteration
        }

        result = calculate(choice, a, b); // Perform calculation
        printResult(result);              // Display result
    }

    return 0;
}

// Function to display menu and validate user choice
int showMenu(void)
{
    int c; // Variable for user choice

    divider(); // Print divider
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Remainder (%%)\n");
    printf("0. Exit\n");
    divider(); // Print divider

    printf("Choice: ");
    scanf("%d", &c);

    // Validate choice
    while (c < 0 || c > 5)
    {
        printf("Invalid choice. Enter 0-5: ");
        scanf("%d", &c);
    }

    return c; // Return validated choice
}

// Function to perform the selected mathematical operation
float calculate(int choice, int a, int b)
{
    switch (choice)
    {
    case 1:
        return a + b; // Addition
    case 2:
        return a - b; // Subtraction
    case 3:
        return a * b; // Multiplication
    case 4:
        return (float)a / b; // Division (cast to float for precision)
    case 5:
        return a % b; // Remainder (modulo)
    default:
        return 0; // Default case (should not reach here)
    }
}

// Function to print a divider line
void divider(void)
{
    printf("\n------------------------------\n");
}

// Function to print the result with formatting
void printResult(float result)
{
    divider();                         // Print divider
    printf("Result = %.2f\n", result); // Print result with 2 decimal places
    divider();                         // Print divider
}
