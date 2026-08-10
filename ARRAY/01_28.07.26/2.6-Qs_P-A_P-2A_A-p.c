#include<stdio.h>

void display1DArrayPointer(int *ptr1,int size1)
{
    printf("1-D Array using Pointer:\n");
  for(int i=0;i<size1;i++)
    {
      printf("%d ", (*ptr1 + i));
    }
}

void display2DArrayPointer(int *ptr2,int size2)
{
    printf("\n2-D Array using Pointer:\n");
  for(int i=0;i<size2;i++)
    {
        for(int j=0;j<size2;j++)
        {
            printf("%d ", (*(ptr2 + i)+j));
        }
        printf("\n");
    }
}

int main()
{
    // 1-D Array Input
 int size1;
 printf("Enter the size of the 1-D Array: ");
 scanf("%d",&size1);
 int arr1[size1];
 printf("Enter the Elements in Array:");
 for(int i=0;i<size1;i++)
    scanf("%d",&arr1[i]);

    // 2D-Array Input
int size2;
    printf("Enter the size of Square Matrix: ");
    scanf("%d",&size2);
    int arr2[size2][size2];
    //Input Element in square matrix.
    printf("Enter Element in Square Matrix:\n");
    for(int i=0;i<size2;i++)
    {
        for(int j=0;j<size2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }

    display1DArrayPointer(&arr1,size1);
    display2DArrayPointer(&arr2,size2);
}