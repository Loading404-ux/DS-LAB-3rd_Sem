#include<stdio.h>

struct Matrix{
 int row;
 int col;
 int val;
};

 

void sparseMatrix(int row,int col,int arr1[row][col],int arr2[row][col])
{ 
  for(int x=0;x<2;x++)
  {
  printf("\nThe Matrix is a Sparse Matrix.\n");
  printf("Row\tCol\tValue\n");
  for(int i=0;i<row;i++)
 {
  for(int j=0;j<col;j++)
  {
  if(x==1){
    if(arr1[i][j]!=0)
    { 
      printf("%d\t%d\t%d\n",i,j,arr1[i][j]);
    }
  }
  else
  if(x==2)
  {
  if(arr2[i][j]!=0)
    { 
      printf("%d\t%d\t%d\n",i,j,arr1[i][j]);
    }
  }
  }
 }
 }
}

int main()
{
 int row,col;
 printf("Enter the numbers of Rows: ");
 scanf("%d",&row);
 printf("Enter the numbers of Columns: ");
 scanf("%d",&col);
 int arr1[row][col];
 int arr2[row][col];
 //Array Input.
 printf("Enter the Elements in Matrix A:\n");
 for(int i=0;i<row;i++)
 {
  for(int j=0;j<col;j++)
  {
    scanf("%d",&arr1[i][j]);
  }
 }
 printf("Enter the Elements in Matrix B:\n");
 for(int i=0;i<row;i++)
 {
  for(int j=0;j<col;j++)
  {
    scanf("%d",&arr2[i][j]);
  }
 }
 for(int x=0;x<2;x++)
 {
  printf("Matrix %d:\n",x);
  int Zero=0,nonZero=0;
  for(int i=0;i<row;i++)
 {
  for(int j=0;j<col;j++)
  {
      if(x==1)
      {
	    if(arr1[i][j]!=0)
	      {
	      nonZero++;
	      }
	      else
	      {
	      Zero++;
	      }
	      printf("%d ",arr1[i][j]);
       }
       else
       { 
           if(arr2[i][j]!=0)
	      {
	      nonZero++;
	      }
	      else
	      {
	      Zero++;
	      }
	      printf("%d ",arr2[i][j]);
       }
  }
  printf("\n");
 }
 if(nonZero<Zero)
 {
  sparseMatrix(row,col,arr1,arr2);
 }
 else
 printf("The Matrix is not is a Sparse Matrix.\n");
 }
 
 
 return 0;
}
