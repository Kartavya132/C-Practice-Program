#include <stdio.h>
#define MAX 100

int main()
{
  // Declaring the variables
  int a[MAX][MAX];
  int i, j;
  int n, m;
  int largest;

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

      // Checking for largest no. in matrix
      if (i == 0 && j == 0)
      {
        largest = a[i][j];
      }
      if (a[i][j] > largest)
      {
        largest = a[i][j];
      }
    }
  }

  // Printing matrix
  printf("\nMatrix::\n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  printf("\nThe Largest no. in matrix is %d.\n", largest);

  return 0;
}
