#include <stdio.h>

#define MAX 100 // Maximum size of matrix

int main()
{
  // Declaring the variables and arrays
  int a[MAX][MAX]; 
  int n, m;        
  int i, j;
  int row_n, column_n;
  int sum = 0;

  // Taking input of no. of rows and columns
  printf("Enter number of rows: ");
  scanf("%d", &n);

  printf("Enter number of columns: ");
  scanf("%d", &m);

  // Taking input of elements of the arrays
  printf("\nEnter matrix elements:\n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      scanf("%d", &a[i][j]); 
    }
  }

  // Display the matrix
  printf("\nMatrix is:\n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      printf("%d ", a[i][j]); 
    }
    printf("\n");
  }

  // Taking input for finding the sum of the row
  printf("\nEnter row number to find sum: ");
  scanf("%d", &row_n);

  sum = 0; 
  for (j = 0; j < m; j++)
  {
    sum += a[row_n - 1][j]; 
  }
  printf("Sum of row %d = %d\n", row_n, sum);

  // Taking input for finding the sum of the column
  printf("\nEnter column number to find sum: ");
  scanf("%d", &column_n);

  sum = 0;
  for (i = 0; i < n; i++)
  {
    sum += a[i][column_n - 1];
  }
  printf("Sum of column %d = %d\n", column_n, sum);

  return 0;
}
