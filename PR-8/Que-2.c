#include <stdio.h>

#define MAX 10

// Function to print cube of array elements using pointer
void printCubes(const int *ptr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int value = *ptr;
            printf("%d ", value * value * value);

            ptr++; // Move to next element
        }
        printf("\n");
    }
}

int main()
{
    int array[MAX][MAX];
    int rows, cols;

    // Input rows and columns
    printf("Enter number of rows and columns (max %d): ", MAX);

    if (scanf("%d %d", &rows, &cols) != 2)
    {
        printf("Invalid input.\n");
        return 1;
    }

    // Validate dimensions
    if (rows <= 0 || cols <= 0 || rows > MAX || cols > MAX)
    {
        printf("Rows and columns must be between 1 and %d.\n", MAX);
        return 1;
    }

    // Input array elements
    printf("Enter %d elements:\n", rows * cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    // Display cubes
    printf("\nCube of elements:\n");
    printCubes(&array[0][0], rows, cols);

    return 0;
}