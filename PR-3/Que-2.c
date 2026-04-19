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
