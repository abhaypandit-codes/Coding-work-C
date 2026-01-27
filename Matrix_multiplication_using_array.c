/*MATRIX MULTIPLICATION USING ARRAY*/

#include<stdio.h>
int main(){
  printf("Matrix_A row and column\n");
  int row,column;
  printf("Enter a row and column:");
  scanf("%d%d",&row,&column);
  printf("Matrix_B row and column\n");
  int row1,column1;
  printf("Enter a row and column:");
  scanf("%d%d",&row1,&column1);
  int matrix_A[row][column],matrix_B[row][column];
  if(column==row1){
 printf("matrix_A:\n");
  
  printf("matrix_A:\n");
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      printf("matrix_A[%d][%d]:",i,j);
      scanf("%d",&matrix_A[i][j]);
    }
  }
  printf("matrix_B:\n");
  for(int i=0;i<row1;i++){
    for(int j=0;j<column1;j++){
      printf("matrix_B[%d][%d]:",i,j);
      scanf("%d",&matrix_B[i][j]);
    }
  }
  printf("multiplication of matrix_A and matrix_B:\n");
  for(int i=0;i<row;i++){
    for(int j=0;j<column1;j++){
      int sum=0;
  for(int k=0;k<column1;k++){
    sum+=matrix_A[i][k]*matrix_B[k][j];
      }
      printf("%d\t",sum);
    }
    printf("\n");
  }
  }
  else{
  printf("Multiplication of two matrix not possible");
  }
  return 0;
}
