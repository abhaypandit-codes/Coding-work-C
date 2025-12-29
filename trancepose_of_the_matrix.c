//PROGRAM TO TAKE TRANCEPOSE OF MATRIX
#include <stdio.h>

int main()
{
  int row, column;

  printf("Enter row and column: ");
  scanf("%d %d", &row, &column);
  int matrix_A[row][column];
  int c[row][column];

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < column; j++)
    {
      printf("Element of matrix_A[%d][%d]:", i, j);
      scanf("%d", &matrix_A[i][j]);
    }
  }
  printf("\nMATRIX_A\n");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < column; j++)
    {
      printf("%d\t", matrix_A[i][j]);
    }
    printf("\n");
  }
  printf("\nTRANCEPOSE OF MATRIX A:\n");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < column; j++)
    {
      c[i][j] = matrix_A[j][i];
      printf("%d\t", c[i][j]);
    }
    printf("\n");
  }

  return 0;
}