#include <stdio.h>

#define MAX 100 // Maximum size of matrix

int main()
{
  int a[MAX][MAX]; // 2D array to store matrix
  int n, m;        // Number of rows and columns
  int i, j;
  int row_n, column_n;
  int sum = 0;

  // Ask user for number of rows and columns
  printf("Enter number of rows: ");
  scanf("%d", &n);

  printf("Enter number of columns: ");
  scanf("%d", &m);

  // Input elements into the matrix
  printf("\nEnter matrix elements:\n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      scanf("%d", &a[i][j]); // Read each element
    }
  }

  // Display the matrix
  printf("\nMatrix is:\n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      printf("%d ", a[i][j]); // Print elements
    }
    printf("\n");
  }

  // Find sum of a specific row
  printf("\nEnter row number to find sum: ");
  scanf("%d", &row_n);

  sum = 0; // Reset sum
  for (j = 0; j < m; j++)
  {
    sum += a[row_n - 1][j]; // Add elements of that row
  }
  printf("Sum of row %d = %d\n", row_n, sum);

  // Find sum of a specific column
  printf("\nEnter column number to find sum: ");
  scanf("%d", &column_n);

  sum = 0; // Reset sum again
  for (i = 0; i < n; i++)
  {
    sum += a[i][column_n - 1]; // Add elements of that column
  }
  printf("Sum of column %d = %d\n", column_n, sum);

  return 0;
}
