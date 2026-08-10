#include<stdio.h>

void upperTriangular(int size,int arr[size][size])
{
    printf("\nUpper Traingle:\n");
   for(int i=0;i<size;i++)
   {
    for(int j=0;j<size;j++)
    {
        if(i<j)
          printf("%d ",arr[i][j]);
        else
          printf("  ");
    }
    printf("\n");
   }
}
void above_belowDiagonal(int size,int arr[size][size])
{
    printf("Elements Above and below the Main diagonal:\n");
    for(int i=0;i<size;i++)
   {
    for(int j=0;j<size;j++)
    {
        if(i==j)
        printf("  ");
        else
        printf("%d ",arr[i][j]);
    }
    printf("\n");
   }
}
int main()
{
    int size,no_zero=0;
    printf("Enter the size of Square Matrix: ");
    scanf("%d",&size);
    int arr[size][size];
    //Input Element in square matrix.
    printf("Enter Element in Square Matrix:\n");
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    //Display Element of the Matrix.
    printf("Matrix A:\n");
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(arr[i][j]!=0){
            printf("%d  ",arr[i][j]);
            no_zero++;
            }
        }
        printf("\n");
    }
    printf("The Total no. of non-zero Elements: %d\n",no_zero);
    upperTriangular(size,arr);
    above_belowDiagonal(size,arr);
    return 0;

}
