#include <stdio.h>
#define MAX 100

int main()
{
  // Declaring the variables
  int a[MAX][MAX], b[MAX][MAX];
  int i, j;
  int n, m;

  // Taking input of rows and columns
  printf("\nEnter the no. of rows : ");
  scanf("%d", &n);
  printf("\nEnter the no. of columns : ");
  scanf("%d", &m);

  // Taking input the elements of the array
  printf("\nEnter the elements in the arrays :: \n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      printf("Enter the no. : ");
      scanf("%d", &a[i][j]);

      // Swapping the columns and rows
      b[j][i] = a[i][j];
    }
  }

  // Printing original Matrix
  printf("\nOriginal Matrix::\n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n"); // Printing new line
  }

  // Printing Transpose Matrix
  printf("\nTranspose Matrix::\n");
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("%d ", b[i][j]);
    }
    printf("\n"); // Printing new line
  }

  return 0; // Ending
}
