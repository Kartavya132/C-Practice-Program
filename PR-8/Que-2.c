#include <stdio.h>

// Function to print cube of array elements using pointer
void cube(int *p, int r, int c)
{
    int i, j;

    // Traverse the 2D array using pointer
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            // Print cube of current element
            printf("%d ", (*p) * (*p) * (*p));

            // Move pointer to next element
            p++;
        }
        printf("\n");
    }
}

int main()
{
    int a[10][10], r, c;
    int i, j;

    // Input rows and columns
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    // Input elements of array
    printf("Enter elements:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Call function by passing pointer
    printf("Cube of elements:\n");
    cube(&a[0][0], r, c);

    return 0;
}
