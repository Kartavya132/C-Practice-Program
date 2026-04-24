#include <stdio.h>

int main() {
    // Declaring the variable
    int rows = 5;
    int cols = 5;

    // Starting the main loop
    for (int i = 0; i < rows; i++) {

        // Starting the inside loop
        for (int j = 0; j < cols; j++) {

            // Condition for printing the 
            if (i == 0 || i == 2 || j == 0 || (j == cols - 1 && i == 1)) {
                printf("* ");
            } else {
                printf("  ");  
            }
        }

        // Printing the next line
        printf("\n");
    }

    return 0;
}
