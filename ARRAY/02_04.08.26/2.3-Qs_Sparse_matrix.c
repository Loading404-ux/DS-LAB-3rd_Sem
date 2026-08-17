#include<stdio.h>

void sparseMatrix(int row,int col,int arr[row][col])
{ 
  printf("Matrix :\n");
  int Zero=0,nonZero=0;
  for(int i=0;i<row;i++)
 {
  for(int j=0;j<col;j++)
  {
    if(arr[i][j]!=0)
      {
      nonZero++;
      }
      else
      {
      Zero++;
      }
      printf("%d ",arr[i][j]);
  }
  printf("\n");
 }
 if(nonZero<Zero)
 {
  printf("\nThe Matrix is a Sparse Matrix.\n");
  printf("Row\tCol\tValue\n");
  for(int i=0;i<row;i++)
 {
  for(int j=0;j<col;j++)
  {
    if(arr[i][j]!=0)
    { 
      printf("%d\t%d\t%d\n",i,j,arr[i][j]);
    }
  }
 }
 }
  else
  {
  printf("The Matrix is not is a Sparse Matrix.\n");
  }
}

int main()
{
 int row,col;
 printf("Enter the numbers of Rows: ");
 scanf("%d",&row);
 printf("Enter the numbers of Columns: ");
 scanf("%d",&col);
 int arr[row][col];
 //Array Input.
 for(int i=0;i<row;i++)
 {
  for(int j=0;j<col;j++)
  {
    scanf("%d",&arr[i][j]);
  }
 }
 sparseMatrix(row,col,arr);
 return 0;
}
