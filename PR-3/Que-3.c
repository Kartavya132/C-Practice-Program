//TODO: Digit adder

#include <stdio.h>

int main() {
    int number, firstDigit, lastDigit, temp;

    //! Taking Input.

    printf("Enter a number: ");
    scanf("%d", &number);

    //? Giving the value to another variable.

    temp = number;

    //? Calculating the last digit

    lastDigit = temp % 10;

    //* Adding condition to loops

    while (temp >= 10) {
        temp = temp / 10; 
    }

    //? Calculating the first digit

    firstDigit = temp;

    //! Giving output.

    printf("First digit = %d\n", firstDigit);
    printf("Last digit = %d\n", lastDigit);
    printf("Sum = %d\n", firstDigit + lastDigit);

    return 0;
}
