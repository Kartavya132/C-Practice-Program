//! PR-3 looper


//TODO: Alphabet Skipper
#include <stdio.h>

int main() {
    char ch;

    //? Loop started

    for (ch = 'a'; ch <= 'z'; ch++) {

        //? Giving condition for skipping

        if ((ch - 'a') % 4 != 0) {
            continue;
        }

        //! giving output

        printf("%c, ", ch);
    }

    printf("\n\n"); 

    return 0;
}

//TODO: Digit Counter

#include <stdio.h>

int main() {
    int number, count = 0;

    //! Taking input

    printf("Enter a number: ");
    scanf("%d", &number);

    //? Adding condition for 0.

    if (number == 0) {
        count = 1;
    } else {

        //? Adding condition for loop.

        while (number != 0) {
            number = number / 10; 
            count++;              
        }
    }

    //! Giving Output.    

    printf("Total digits = %d\n", count);

    return 0;
}

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