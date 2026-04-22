#include <stdio.h>

int main() {

    //? Declaring the variables
    int i, j;

    //? Starting the main loop
    for (i = 5; i >= 1; i--) {

        //! Starting the loop for space in the output
        for (j = i - 1; j >= 1; j--) {
            printf("  ");
        }

        //! Starting the loop for integer output
        for (j = i; j <= 5; j++) {
            printf("%d ", j);
        }

        //! Output to next line
        printf("\n");
    }

    return 0;
}
