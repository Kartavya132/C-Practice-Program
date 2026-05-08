#include <stdio.h>

// Function to input elements using pointers
void inputElements(int rows, int cols, int *ptr) {
    printf("Enter %d elements:\n", rows * cols);
    for (int i = 0; i < rows * cols; i++) {
        scanf("%d", (ptr + i)); // Directly store at pointer offset
    }
}

// Function to print cubes using pointer arithmetic
void printCubes(int rows, int cols, int *ptr) {
    printf("\nCube of elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Calculate offset: (current row * total columns) + current column
            int value = *(ptr + (i * cols) + j);
            printf("%d\t", value * value * value);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Enter rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2) return 1;

    // Use a VLA (Variable Length Array) for simplicity
    int array[rows][cols];

    // Pass the base address of the array to our functions
    inputElements(rows, cols, &array[0][0]);
    printCubes(rows, cols, &array[0][0]);

    return 0;
}
