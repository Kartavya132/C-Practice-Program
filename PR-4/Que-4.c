#include <stdio.h>

int main() {

    //? Declaring the variables
    int i, j;

    //? Starting the main loop
    for (i = 5; i >= 1; i--) {

        //! Starting the loop for space
        for (j = i; j < 5; j++) {
            printf("  ");
        }

        //! Starting the loop for 1s or 0s printing
        for (j = 1; j <= i; j++) {

            //? Ternary operator for 1s and 0s in code
            (j % 2 == 1) ? printf("1 ") : printf("0 ");
        }

        //! To print in next row
        printf("\n");
    }

    return 0; //? Program executed successfully
}
