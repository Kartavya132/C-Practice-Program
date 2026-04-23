#include <stdio.h>

int main() {

    //? Declaring the variables
    int i, j, k, n = 5;

    //? Starting the main loop
    for (i = n; i >= 1; i--) {

        //! Starting the loop for space
        for (j = 1; j < i; j++) {
            printf("   ");
        }

        //! Starting the loop for inclination
        for (k = i; k <= n; k++) {
            printf("%d ", k);
        }

        //! Starting the loop for declination
        for (k = n - 1; k >= i; k--) {
            printf("%d ", k);
        }

        // Printing the next line
        printf("\n");
    }
    
    return 0;
}
