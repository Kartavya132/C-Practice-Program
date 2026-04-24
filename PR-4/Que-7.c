#include <stdio.h>

int main() {
    int rows = 5;
    int cols = 5;

    // Outer loop controls rows
    for (int i = 0; i < rows; i++) {

        // Inner loop controls columns
        for (int j = 0; j < cols; j++) {

            if (i == 0 || i == 2 || j == 0 || (j == cols - 1 && i == 1)) {
                printf("* ");
            } else {
                printf("  ");   // Print spaces for empty part
            }
        }

        // Move to next line after each row
        printf("\n");
    }

    return 0;
}
